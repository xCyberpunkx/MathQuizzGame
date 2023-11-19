enum class enDifficulty {
    Easy = 1,
    Medium = 2,
    Hard = 3,
    Mix = 4
};
enum class enOperation {
    Add = 1,
    Subtract = 2,
    Multiply = 3,
    Divide = 4
};
enum class enAnswers {
    Correct = 1,
    Incorrect = 2
};
struct stQuizzInfo {
    short QuestionNumber;
    enDifficulty QuestionDifficulty;
    enOperation Operator;
    enAnswers YourAnswer;
    short CorrectAnswer;
};
struct stQuizzResults {
    short NumberOfQuestions;
    enDifficulty QuizzDifficulty;
    enOperation OperationType;
    short NumberOfRightAnswers;
    short NumberOfWrongAnswers;
};
short HowManyQuestions() {
    short numberOfQuestions;
    do {
        cout << "How many questions do you want to answer? (1-10): ";
        cin >> numberOfQuestions;
    } while (numberOfQuestions < 1 || numberOfQuestions > 10);
    return numberOfQuestions;
}
enDifficulty GenerateQuestionDifficulty() {
    int difficulty;
    do {
        cout << "Enter question difficulty: [1] Easy, [2] Medium, [3] Hard, [4] Mix: ";
        cin >> difficulty;
    } while (difficulty < 1 || difficulty > 4);

    return static_cast<enDifficulty>(difficulty);
}
enOperation QuizzOperator() {
    int operation;
    do {
        cout << "Enter operation type: [1] Add, [2] Subtract, [3] Multiply, [4] Divide: ";
        cin >> operation;
    } while (operation < 1 || operation > 4);

    return static_cast<enOperation>(operation);
}
int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}
bool GenerateQuestion(stQuizzInfo& QuizzInfo) {
    short a, b;
    a = RandomNumber(0, 80);
    b = RandomNumber(0, 80);

    switch (QuizzInfo.Operator) {
    case enOperation::Add:
        cout << a << " + " << b << " = ";
        QuizzInfo.CorrectAnswer = a + b;
        break;
    case enOperation::Subtract:
        cout << a << " - " << b << " = ";
        QuizzInfo.CorrectAnswer = a - b;
        break;
    case enOperation::Multiply:
        cout << a << " * " << b << " = ";
        QuizzInfo.CorrectAnswer = a * b;
        break;
    case enOperation::Divide:
        // To ensure a non-zero divisor
        b = (b == 0) ? 1 : b;
        cout << a << " / " << b << " = ";
        QuizzInfo.CorrectAnswer = a / b;
        break;
    default:
        break;
    }

    short userAnswer;
    cin >> userAnswer;
    QuizzInfo.YourAnswer = static_cast<enAnswers>(userAnswer);

    return userAnswer == QuizzInfo.CorrectAnswer;
}
stQuizzResults PlayQuizz() {
    stQuizzResults Results{};
    Results.NumberOfQuestions = HowManyQuestions();
    Results.QuizzDifficulty = GenerateQuestionDifficulty();
    Results.OperationType = QuizzOperator();

    short correctAnswers = 0, wrongAnswers = 0;

    stQuizzInfo QuizzInfo{};
    QuizzInfo.QuestionNumber = Results.NumberOfQuestions;
    QuizzInfo.QuestionDifficulty = Results.QuizzDifficulty;
    QuizzInfo.Operator = Results.OperationType;

    for (short i = 0; i < Results.NumberOfQuestions; ++i) {
        cout << "\nQuestion " << i + 1 << ":\n";
        if (GenerateQuestion(QuizzInfo)) {
            correctAnswers++;
            system("color 2F");
        }
        else {
            wrongAnswers++;
            system("color 4F");
        }
        }

    Results.NumberOfRightAnswers = correctAnswers;
    Results.NumberOfWrongAnswers = wrongAnswers;

    return Results;
}
void ShowQuizzResults(const stQuizzResults& results) {
    cout << "\n**** QUIZ RESULTS ****\n";
    cout << "Total Number Of Questions: " << results.NumberOfQuestions << endl;
    cout << "Difficulty: " << static_cast<int>(results.QuizzDifficulty) << endl;
    cout << "Operation Type: " << static_cast<int>(results.OperationType) << endl;
    cout << "Number Of Correct Answers: " << results.NumberOfRightAnswers << endl;
    cout << "Number Of Wrong Answers: " << results.NumberOfWrongAnswers << endl;
    if (results.NumberOfRightAnswers > results.NumberOfWrongAnswers)
        cout << system("color 2F");
    else
        cout << system("color 4F");
}
void RestartScreen() {
    system("cls");
    system("color 0F");
}
void StartGame() {
    srand(static_cast<unsigned>(time(nullptr)));
    char restart;
    do {
        RestartScreen();
        stQuizzResults QuizzResults = PlayQuizz();
        ShowQuizzResults(QuizzResults);
        cout << "Do You Want To Play Again? (y/n): ";
        cin >> restart;
    } while (restart == 'y' || restart == 'Y');
}

int main() {
    StartGame();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include <iostream>
//using namespace std;
//#include <Windows.h>
//enum enDifficulity {
//	Easy = 1,
//	Meduim = 2,
//	Hard = 3,
//	enMix = 5
//};
//enum enOperation {
//	Add = 1,
//	Substract = 2,
//	Multiplication = 3,
//	Division = 4,
//	Mix = 5
//};
//enum enAnswers {
//	Correct = 1,
//	False = 2
//};
//struct stQuizzInfo {
//	short QuestionNumber;
//	enDifficulity QuestionDifficulty;
//	enOperation Operator;
//	enAnswers YourAnswer;
//	enAnswers CorrectAnswer;
//};
//struct stQuizzResults {
//	short NumberOfQuestions;
//	enDifficulity QuizzDifficulty;
//	enOperation OperationType;
//	short NumberOfRightAnswers;
//	short NumberOfWrongAnswers;
//};
//void setAwnserScreenColor(enAnswers Answer) {
//	switch (Answer) {
//	case(enAnswers::Correct):
//		system("color 2F");
//		break;
//	case(enAnswers::False):
//		system("color 4F");
//		break;
//	}
//}
//short HowManyQuestions(short& NumberOfQuestions) {
//	do {
//		cout << "How Many Questions Do You want to answer?";
//		cin >> NumberOfQuestions;
//	} while (NumberOfQuestions < 1 || NumberOfQuestions > 10);
//	return NumberOfQuestions;
//	}
//int RandomNumber(int From, int To) {
//	int Randnum = rand() % (To - From + 1) + From;
//	return Randnum;
//}
//enDifficulity GenerateQuestionDifficulty(short& Difficulty) {
//	do {
//		cout << "Enter Questions Level[1] easy, 2 Med, 3 Hard, 4 Mix?";
//		cin >> Difficulty;
//	} while (Difficulty < 1 || Difficulty > 4);
//
//	 
//	if (Difficulty == 1)
//		return enDifficulity::Easy;
//
//	else if (Difficulty == 2)
//		return enDifficulity::Meduim;
//
//	else if (Difficulty == 3)
//		return enDifficulity::Hard;
//
//	else(Difficulty == 4);
//		return enDifficulity::enMix;
//	
//}
//enOperation QuizzOperator(short& Operator) {
//	do {
//		cout << "enter operation type: [1] add ,[2] sub , [3] division, [4] Multiplication, [5] mix?";
//		cin >> Operator;
//	} while (Operator < 1 || Operator > 5);
//
//	if (Operator == 1)
//		return enOperation::Add;
//
//	else if (Operator == 2)
//		return enOperation::Substract;
//
//	else if (Operator == 3)
//		return enOperation::Division;
//
//	else if (Operator == 4)
//		return enOperation::Multiplication;
//
//	else
//		return enOperation::Mix;
//}
//bool GenerateEasyQuestions(stQuizzInfo QuizzInfo) {
//	short a, b;
//	if (QuizzInfo.Operator == 1) {
//		a = RandomNumber(0, 9);
//		b = RandomNumber(0, 9);
//		short answer = 0;
//		cout << a << "\n+\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a + b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a + b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 2) {
//		a = RandomNumber(0, 9);
//		b = RandomNumber(0, 9);
//		short answer = 0;
//		cout << a << "\n-\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a - b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a - b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 3) {
//		a = RandomNumber(0, 9);
//		b = RandomNumber(0, 9);
//		short answer = 0;
//		cout << a << "\n/\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a / b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a / b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 4) {
//		a = RandomNumber(0, 9);
//		b = RandomNumber(0, 9);
//		short answer = 0;
//		cout << a << "\nX\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a * b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a * b << endl;
//		}
//	}
//}//----------------------
//bool GenerateMedQuestions(stQuizzInfo QuizzInfo) {
//	short a, b;
//	if (QuizzInfo.Operator == 1) {
//		a = RandomNumber(10, 30);
//		b = RandomNumber(10, 30);
//		short answer = 0;
//		cout << a << "\n+\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a + b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a + b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 2) {
//		a = RandomNumber(10, 30);
//		b = RandomNumber(10, 30);
//		short answer = 0;
//		cout << a << "\n-\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a - b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a - b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 3) {
//		a = RandomNumber(10, 30);
//		b = RandomNumber(10, 30);
//		short answer = 0;
//		cout << a << "\n/\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a / b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a / b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 4) {
//		a = RandomNumber(10, 30);
//		b = RandomNumber(10, 30);
//		short answer = 0;
//		cout << a << "\nX\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a * b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a * b << endl;
//		}
//	}
//}
//bool GenerateHardQuestions(stQuizzInfo QuizzInfo) {
//	short a, b;
//	if (QuizzInfo.Operator == 1) {
//		a = RandomNumber(40,80);
//		b = RandomNumber(40, 80);
//		short answer = 0;
//		cout << a << "\n+\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a + b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a + b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 2) {
//		a = RandomNumber(40, 80);
//		b = RandomNumber(40, 80);
//		short answer = 0;
//		cout << a << "\n-\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a - b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a - b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 3) {
//		a = RandomNumber(40, 80);
//		b = RandomNumber(40, 80);
//		short answer = 0;
//		cout << a << "\n/\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a / b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a / b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 4) {
//		a = RandomNumber(40, 80);
//		b = RandomNumber(40, 80);
//		short answer = 0;
//		cout << a << "\nX\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a * b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a * b << endl;
//		}
//	}
//}
//bool GenerateMixedQuestions(stQuizzInfo QuizzInfo) {
//	short a, b;
//	if (QuizzInfo.Operator == 1) {
//		a = RandomNumber(0, 80);
//		b = RandomNumber(0, 80);
//	short answer = 0;
//		cout << a << "\n+\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a + b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a + b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 2) {
//		a = RandomNumber(0, 80);
//		b = RandomNumber(0, 80);
//		short answer = 0;
//		cout << a << "\n-\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a - b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a - b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 3) {
//		a = RandomNumber(0, 80);
//		b = RandomNumber(0, 80);
//		short answer = 0;
//		cout << a << "\n/\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a / b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a / b << endl;
//		}
//	}
//	else if (QuizzInfo.Operator == 4) {
//		a = RandomNumber(0, 80);
//		b = RandomNumber(0, 80);
//		short answer = 0;
//		cout << a << "\nX\n" << b << "\n----------------\n";
//		cin >> answer;
//		if (answer == (a * b)) {
//			cout << "Correct Answer! ;-)\n";
//			setAwnserScreenColor(QuizzInfo.CorrectAnswer);
//			return true;
//		}
//		else {
//			cout << "Wrong Answer :-(\n";
//			cout << "Correct Answer is: " << a * b << endl;
//		}
//	}
//}
//bool GenerateQuestion(stQuizzInfo QuizzInfo) {
//
//	for (int i = 0; i < QuizzInfo.QuestionNumber; i++)
//	{
//		if (QuizzInfo.QuestionDifficulty == enDifficulity::Easy)
//
//			cout << GenerateEasyQuestions(QuizzInfo) << endl;
//
//		else if (QuizzInfo.QuestionDifficulty == enDifficulity::Meduim)
//
//			cout << GenerateMedQuestions(QuizzInfo) << endl;
//
//		else if (QuizzInfo.QuestionDifficulty == enDifficulity::Hard)
//			cout << GenerateEasyQuestions(QuizzInfo) << endl;
//
//		else
//			cout << GenerateEasyQuestions(QuizzInfo) << endl;
//	}
//}
//enAnswers CheckForAnswer(stQuizzInfo QuestionInfo) {
//	
//	for (int i = 0; i < QuestionInfo.QuestionNumber; i++)
//	{
//		if (GenerateQuestion(QuestionInfo)) {
//			cout << GenerateQuestion(QuestionInfo);
//			return enAnswers::Correct;
//		}
//		else {
//			cout << GenerateQuestion(QuestionInfo);
//			return enAnswers::False;
//		}
//		}
//}
//enAnswers CorrectAnswers(stQuizzInfo CorrectAnswer){
//	return (CheckForAnswer(CorrectAnswer));
//}
//stQuizzResults   FillQuizzResults(short HowManyQuestions,short CorrectAnswers,short WrongAnswers) {
//	stQuizzResults QuizzResults;
//	QuizzResults.NumberOfQuestions = HowManyQuestions;
//	QuizzResults.NumberOfRightAnswers = CorrectAnswers;
//	QuizzResults.NumberOfWrongAnswers = WrongAnswers;
// }
//void PrintQuestionResult(stQuizzInfo Result) {
//	cout << "Number Of Questions: " << Result.QuestionNumber << endl;
//	cout << "Questions Level: " << Result.QuestionDifficulty << endl;
//	cout << "Operation Type: " << Result.Operator << endl;
//	cout << "Number Of Wrong Answers: " << Result.YourAnswer;
//	cout << "Number Of Correct Answers: " << Result.YourAnswer;
//
//}
//stQuizzResults PlayQuizz(short NumberOfQuestions) {
//	stQuizzInfo QuizzInfo;
//
//	short CorrectAnswers = 0, WrongAnswers = 0, Operator = 0,Difficulty = 0;
//
//	for (short Questions = 1; Questions <= NumberOfQuestions; Questions++) {
//		cout << "\nQuestion [" << Questions << "]:\n";
//		QuizzInfo.QuestionNumber = HowManyQuestions(NumberOfQuestions);
//		QuizzInfo.QuestionDifficulty = GenerateQuestionDifficulty(Difficulty);
//		QuizzInfo.Operator = QuizzOperator(Operator);
//		QuizzInfo.YourAnswer = CheckForAnswer(QuizzInfo);
//		//QuizzInfo.CorrectAnswer = CorrectAnswers(QuizzInfo.CorrectAnswer);
//
//		if (QuizzInfo.YourAnswer == enAnswers::Correct) {
//			CorrectAnswers++;
//
//		}
//		else if (QuizzInfo.YourAnswer == enAnswers::False) {
//			WrongAnswers++;
//		}
//		
//		PrintQuestionResult(QuizzInfo);
//	}
//	return FillQuizzResults(NumberOfQuestions, CorrectAnswers, WrongAnswers);
//}
//string tabs(short numberOfTabs) {
//	string t = "";
//	for (int i = 0; i < numberOfTabs; i++)
//	{
//		t = t + "\t";
//		cout << t;
//	}
//	return t;
//}
//void ShowQuizzOverScreen() {
//	cout << tabs(1) << "-----------------------------------------------------------------------------\n\n";
//	cout << tabs(1) << "                          +++G A M E   O V E R+++\n\n";
//	cout << tabs(1) << "-----------------------------------------------------------------------------\n\n";
//}
//void ResetGame() {
//	system("cls");
//	system("color 0F");
//}
//void StartGame() {
//	short NumberOfQuestions;
//	char restart = 'y';
//	do {
//		ResetGame();
//		 stQuizzResults QuizzResults = PlayQuizz(HowManyQuestions(NumberOfQuestions));
//		ShowQuizzOverScreen();
//		//ShowQuizzResults()
//		cout << "Do You Want To Play Again ?";
//		cin >> restart;
//	} while (restart == 'y' || restart == 'Y');
//}
//
//int main()
//{
//	// Seed to generate Random Numbers
//	srand((unsigned)time(NULL));
//	StartGame();	
//	return 0;
//}
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

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
        if (GenerateQuestion(QuizzInfo))
            correctAnswers++;
        else
            wrongAnswers++;
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
}

void StartGame() {
    srand(static_cast<unsigned>(time(nullptr)));
    char restart;
    do {
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

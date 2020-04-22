// Hovhannes Margaryan
// CS/IS 135 - 3817 - Online Class
// Lab# 4


#include "play.h"

using namespace std;

string convert(int choice)
{
	string s = "";
	switch (choice)
	{
	case 1:
		s = "Rock";
		break;
	case 2:
		s = "Paper";
		break;
	case 3:
		s = "Scissors";
		break;
	default:
		s = "Undefined";
		break;
	}

	return s;
}

void showMenu(char &select)
{
	cout << "ROCK PAPER SCISSORS MENU" << endl;
	cout << "-------------------------" << endl;
	cout << "p)Play Game" << endl;
	cout << "q)Quit" << endl;
	cout << "Enter selection: ";
	cin >> select;
}

bool isTie(string playerChoose, string ComputerChoose)
{
	return (playerChoose == ComputerChoose);
}

bool isPlayerWinner(string playerChoose, string ComputerChoose)
{
	if (
		(playerChoose == "Rock" && ComputerChoose == "Scissors") ||
		(playerChoose == "Scissors" && ComputerChoose == "Paper") ||
		(playerChoose == "Paper" && ComputerChoose == "Rock") 
		)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void displayChoeses(string playerChoose, string ComputerChoose)
{
	cout << "You chose: " << playerChoose << endl;
	cout << "The computer chose: " << ComputerChoose << endl;
}

string getComputerChoice(int& secreatNumber)
{
	secreatNumber = rand() % 3 + 1;
	return convert(secreatNumber);
}

string getPlayerChoice(int& secreatNumber)
{
	do {
		cout << "Rock, Paper or Scissors?" << endl;
		cout << "1) Rock" << endl;
		cout << "2) Paper" << endl;
		cout << "3) Scissors" << endl;
		cout << "Please enter your choice: ";
		cin >> secreatNumber;
		switch (secreatNumber)
		{
		case 1:
		case 2:
		case 3:
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
	} while (secreatNumber <= 0 || secreatNumber > 3);
	return convert(secreatNumber);
}


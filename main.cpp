// Hovhannes Margaryan
// CS/IS 135 - 3817 - Online Class
// Lab# 4


/* Pseudocode

   * Create variables >> char select, int player, computer, string playerChoose,ComputerChoose;
   * do
		Display showMenu(
							ROCK PAPER SCISSORS MENU
							-------------------------
							p)Play Game
							q)Quit
							 )
		Ask Selection:
		Switch on Selection
		       Match 1: Selection = p
						  Get a ComputerChoose:
						     Call a function getComputerChoice();
			              Get a playerChoose:
						     Call a function getPlayerChoice();
						  Display:
						         Rock, Paper or Scissors?
								 1) Rock
								 2) Paper
								 3) Scissors
						  Ask Choice:
			   Display the user chose and what the computer chose:
			   Call a function isTie 
			          if(istie)
					        Display "It's a TIE!"
                         else
			   Call a function isPlayerWinner:
			         If one player chooses Rock and the other player chooses Scissors, then Rock wins
                                           The game then prints a message to the user indicating they won
					If one player chooses Scissors and the other player chooses Paper, then Scissors wins
	                                       The game then prints a message to the user indicating they won
	                If one player chooses Paper and the other player chooses Rock, then Paper wins
	                                       The game then prints a message to the user indicating they won
					If the player has won:
					              Display "You WIN!"
                    If the player did not won:
					               Display "Sorry you LOSE."
               Match 2: Selection = q
			            Display "Quitting"
			   default: 
						Display "Invalid selection"
	 while select != 'q'
*/


#include "play.h"
#include <ctime>


using namespace std;

int main()
{
	char select;
	int player, computer;
	string playerChoose,ComputerChoose;
	srand(13);
	do
	{
		showMenu(select);
		switch (select)
		{
		case 'p':
			ComputerChoose = getComputerChoice(computer);
			playerChoose = getPlayerChoice(player);
			displayChoeses(playerChoose, ComputerChoose);
			if (isTie(playerChoose, ComputerChoose))
			{
				cout << "It's a TIE!" << endl;
			}
			else 
			{
				if (isPlayerWinner(playerChoose, ComputerChoose))
				{
					cout << "You WIN!" << endl;
				}
				else
				{
					cout << "Sorry you LOSE." << endl;
				}
			}
			break;
		case 'q':
			cout << "Quitting" << endl;
			break;
		default:
			cout << "Invalid selection" << endl;
			break;
		}
	} while (select != 'q');

	return 0;
}
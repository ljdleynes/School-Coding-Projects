#ifndef BINGOGAME_H
#define BINGOGAME_H
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <string>
#include <fstream>
#include <ctime>
#include <conio.h>
using namespace std;

class Cards //[AMO] Abstraction example
{
public:
	virtual void DisplayCard() = 0; //[AMO] Virtual function for DisplayCard
	virtual void FillCard() = 0; //[AMO] Virtual function for FillCard
};

class Colors //[AMO] This class is for the colors
{
protected:
	enum ConsoleColors//[AMO] and [DRS] This block of code is needed for the colors of the text
	{
		
		PurpleFore = FOREGROUND_RED | FOREGROUND_BLUE,
		FuchsiaFore = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
	};

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //[DRS] "handle" -serves as a pointer to manipulate string
};

class Timerr //[AMO] Abstraction example 
{
	virtual void Timer(unsigned long) = 0;
};


class BingoCard: public Colors, Cards,  Timerr
{
public:
	
	int bingoCardArray[3][3][5][5] = {}; //[LJL] Change After - Array For Int Data Type
	char arrayDisplayCard[3][3][5][5] = {}; //[LJL]  Array For Char Data Type When We Mark The Bingo Card
	int bingoNumbersStore[1000] = {};

	//[LJL]Function Prototype	
	BingoCard (); //[LJL] bingoCard constructor
	void Timer (unsigned long); //[AMO] and [DRS]This function is to put a delay
	void DisplayCard ();//[AMO] This function displays the cards of the players
	void FillCard ();//[AMO] This function fills the cards
	void MarkTheCard (int randNum);//[AMO] Marks the card when it is equal to the random number
	void CheckVerHorDiag (bool &check1, int &player1);//[RDQ] This function checks the cards per player to find out if theres a winner
	int GenerateRandomNumber (bool rNum); //[LJL] Function To Generate A Random Number
	void DisplayRandomNumber (int, int);//[LJL] Display Random Number In the Main
	void ShowRandomNumbersAtTheEnd(int); //[AMO] and [RDQ] This function shows the random numbers that were generated at the end of the game
};

class DisplayArt: public Colors //[AMO]  Composition example
{
public:
	DisplayArt(string); //[AMO] and [DRS] Constructor for displayArt
	void LogInDisplay(); //[AMO] and [DRS] This function outputs the login art
	void InstructionsDisplay();//[AMO] and [DRS] This function outputs the instructions art
	void LoadingScreenDisplay(int);//[AMO] and [DRS] This function outputs the loading screen
	void IntroDisplay();//[AMO] and [DRS] This function outputs the introduction art
	void ThankYouDisplay();//[AMO] This function outputs the thank you art
private:
	string hashtag = "?";
};

class BingoPlayer: public Colors, Timerr //[AMO] Encapsulation
{
	//[LJL] Encapsulation Example - hide data in private and use them
public:
	BingoPlayer(string, DisplayArt x); //[LJL] bingoPlayer constructor
	void Timer(unsigned long);
	void PromptPlayer();//[LJL]Prompt User
	void DisplayPlayerInfo();//[LJL]Output the Data
	void PrintPlayerInfo (); //[LJL] Save the Data in txt file
	string userName;
private:
	string enterText;
	DisplayArt artsInPlayer; //[AMO] an object of displayArt (Composition)
	int userSize = 0;
	char x;
	bool decideTF = false;
	char key ='x';
};

class BingoResult
{
	//[LJL] Polymorphism Example 
public:
	BingoResult ();
	void Congratulate();
private:
	string Congrats;
};

class BingoHumanWin : public BingoResult
{
public:
	BingoHumanWin ();
	void Congratulate (); //[LJL] Use to Congratulate the Player

};

class BingoBotWin : public BingoResult 
{
public:
	BingoBotWin ();
	void Congratulate (); //[LJL] Use to Congratulate The Computer Bot
};

class BingoDisplay: public Colors, Timerr //[LJL] Functions Connected to Display Only
{
public:
	BingoDisplay(DisplayArt y);
	void GameInstructions ();//[AMO] This function displays the game instructions
	void PlayAgain ();//[AMO] This function displays the text that tells the user on how to play again
	void GameStart ();//[AMO] This function displays the creators and the title of the game
	void CallNextNum ();//[AMO] This function prompts the user to enter to call the next card
	void GameHeader (); //[LJL] Header of The Game
	void BeforeGameText ();//[AMO] and [DRS] This function creates an illusion of a loading screen
	void Timer (unsigned long); //[AMO] AND [DRS] This function creates a delay 
private:
	DisplayArt artsInDisplay; //[AMO] an object of displayArt (Composition)
	char enter = 'x';
};
//constructors of classes
BingoCard::BingoCard()
{

}
BingoPlayer::BingoPlayer(string n, DisplayArt x)
	: artsInPlayer(x)
{
	enterText = n;
}

BingoResult::BingoResult()
{

}

BingoHumanWin::BingoHumanWin()
{

}

BingoBotWin::BingoBotWin()
{

}
DisplayArt::DisplayArt(string h) //[AMO] User-defined constructor example
{
	hashtag = h;
}
BingoDisplay::BingoDisplay(DisplayArt y) //[AMO] Composition example
	: artsInDisplay(y)
{

}

void BingoPlayer::PromptPlayer()
{
	while (decideTF == false)
	{
		SetConsoleTextAttribute(h, 11);
		for (int i = 0; i <= 24; i++)
			cout << "\n";
		artsInPlayer.LogInDisplay();
		try //[LJL] Exception handling example
		{
			cout << setw(87) << right << " " << enterText << endl;
			cout << setw(87) << right << " ";
			getline(cin, userName);
			userSize = userName.size();
			if (userSize <= 10 && userSize > 0)
			{
				cout << setw(87) << right << " " << "The chosen username is valid (You are player #1)";
				for (int i = 0; i < 3; i++)
				{
					cout << "."; //[AMO] and [DRS] Countdown for the next screen to be printed
					Timer(1);
				}

				decideTF = true;

			}
			else
			{
				throw (userName);
			}
		}
		catch (string name)
		{
			cout << setw(87) << right << " " << "The chosen username is invalid" << endl;
			cout << setw(87) << right << " " << "Try another username" << endl;
			cout << setw(87) << right << " " << "Clearing screen in ";
			for (int h = 3; h > 0; h--)
			{
				cout << h << "."; //[AMO] and [DRS] Countdown for the next screen to be printed
				Timer(1);
			}
		}
		system("cls");
	}
	
	
		
	

}

void BingoPlayer::DisplayPlayerInfo()
{
	do
	{
	SetConsoleTextAttribute(h, 11);
	for (int i = 0; i <= 24; i++)
		cout << "\n";

	artsInPlayer.LogInDisplay(); //[AMO]Calls the function LogInDisplay
	SetConsoleTextAttribute(h, 10); //[AMO] Changes the color to light green
	cout << setw(87) << right << "  " << "Player UserName: " << userName << endl; //[AMO] This shows the username of the user
	cout << setw(87) << right << "  " << "There are 3 players ( 1 human, 2 bots) in the game" << endl;
	cout << setw(87) << right << "  " << "There are 3 bingo cards per player which means there are a total of 9 " << endl;
	cout << setw(87) << right << "  " << "bingo cards in the game" << endl;
	cout << setw(87) << right << "  " << "Press Enter to Start" << endl;
	cout << setw(87) << right << "  ";
	key = _getch();
	system("cls");

	} while (key != '\r');
	SetConsoleTextAttribute(h, 15);
	
	system("cls");

}

void BingoPlayer::PrintPlayerInfo()
{
	ofstream  myFile; //[LJL] Declaration of variable for output stream
	myFile.open("playerInfos.txt", ios_base::app); //[LJL] append the value to the text file
	myFile << "Player UserName:" << endl;
	myFile << userName << endl;
	myFile.close();
}

// [CD] this function use to display the generated BINGO CARD
void BingoCard::DisplayCard()
{
	cout << setw(150) << " " << endl;

	int rowCard,
		colCard;

	for (int playerNum = 0; playerNum < 3; playerNum++)  // [CD] this loop is use for the iteration of number of players
	{
		cout << setw(80) << right << "  " << "Player # " << playerNum + 1 << ":\n" << endl; // [CD] this line displays the player number
		for (int cardNum = 0; cardNum < 3; cardNum++)
		{
			Timer(1); //[AMO] and [DRS] This allows the user to have time to look at the cards
			cout << "Printing card";
			for (int i = 0; i < 3; i++)
			{
				cout << "."; //[AMO] and [DRS] Countdown for the next card to be printed
				Timer(1);
			}
			cout << endl << endl;
			cout << setw(70) << right << "  " << setw(10) << "Card # " << cardNum + 1 << ":" << "\n\n";
			cout << setw(100) << right << "  " << setw(7) << "";
			SetConsoleTextAttribute(h, 4);//[AMO] and [DRS] Sets the next output to Red	 
			cout << "B";
			SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] Sets the next output to Cyan
			cout << setw(7) << "I";
			SetConsoleTextAttribute(h, 14);//[AMO] and [DRS] Sets the next output to Yellow
			cout << setw(8) << "N";
			SetConsoleTextAttribute(h, 10);//[AMO] and [DRS] Sets the next output to Light green
			cout << setw(8) << "G";
			SetConsoleTextAttribute(h, ConsoleColors::FuchsiaFore);//[AMO] and [DRS] Sets the next output to Fuchsia
			cout << setw(8) << "O" << "\n";
			SetConsoleTextAttribute(h, 9);//[AMO] and [DRS] Sets the next output to light blue
			cout << setw(149) << "    - - - - - - - - - - - - - - - - - - - - - - - -  \n";
			SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] Sets the next output to white
			for (rowCard = 0; rowCard < 5; ++rowCard)  //[CD] this loop is use to display the card row by row up to 5 rows
			{
				cout << setw(100) << right << " ";
				for (colCard = 0; colCard < 5; ++colCard) // [CD] this loop is use to display the card column by column up to 5 columns
				{
					SetConsoleTextAttribute(h, ConsoleColors::PurpleFore);//[AMO] and [DRS] Sets the next output to Purple
					cout << setw(3) << right << "|";
					SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] Sets the next output to white
					if (colCard == 2 && rowCard == 2) //[CD] this marks the center element at coordinate 3, 3 at row2 and column 2 with "FREE"
					{
						SetConsoleTextAttribute(h, 10);
						cout << setw(5) << " FREE";
						SetConsoleTextAttribute(h, 15);
					}
					else
					{
						if (arrayDisplayCard[playerNum][cardNum][rowCard][colCard] == '*')
						{
							SetConsoleTextAttribute(h, 10);
							cout << setw(5) << bingoCardArray[playerNum][cardNum][rowCard][colCard]; //[AMO and [DRS] Outputs the number in green  
							SetConsoleTextAttribute(h, 15); 
						}
						else
							cout << setw(5) << bingoCardArray[playerNum][cardNum][rowCard][colCard];
					}

				}
				cout << endl << endl;
			}
		}
	}
}

// [CD] this function is use to fill the BINGO CARD
void BingoCard::FillCard()
{
	int rowCard,
		colCard;
	bool check[76], newNum, isFound; //[CD] newNum is use to get another value in case a generated value is repeatedly generated


	for (int i = 0; i < 76; ++i) // [CD] as long as it is false number is still available and when its true then the value already generated and will generate new num. 
		check[i] = false;        //CD] First fill check arrays with falses


	for (int playerNum = 0; playerNum < 3; playerNum++) // [CD]  iterates playerNumer array
	{
		for (int cardNum = 0; cardNum < 3; cardNum++) // [CD]  iterates cardNumber array
		{
			for (colCard = 0; colCard < 5; ++colCard) //[CD] this for loop is used for the iteration of values in  columns
			{

				for (rowCard = 0; rowCard < 5; ++rowCard) //[CD] this for loop is used for the iteration of values in  rows
				{

					if (rowCard == 2 && colCard == 2) //[CD] this checks the center element of the matrix 
					{
						bingoCardArray[playerNum][cardNum][rowCard][colCard] = 100;

					}
					else
					{
						for (int i = 0; i < 5; i++)
						{
							for (int j = 0; j < 5; j++)
							{
								newNum = false;
								while (!newNum)
								{
									isFound = false;
									int number = (rand() % 15) + (i * 15) + 1; //[CD] This is to make sure the random generated numbers are appropriate per column.
									for (int k = 0; k < 5; k++)
									{

										if (bingoCardArray[playerNum][cardNum][k][i] == number) //[CD] compares rowCard k and colCardumn i
											isFound = true;
									}
									if (!isFound)
									{

										bingoCardArray[playerNum][cardNum][j][i] = number; //[CD] compares rowCard j and colCardumn i
										newNum = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void BingoCard::CheckVerHorDiag(bool& check1, int& player1)
{
	int diagonal1 = 0, diagonal2 = 0;
	int vertical1 = 0, vertical2 = 0, vertical3 = 0, vertical4 = 0, vertical5 = 0;
	int horizontal1 = 0, horizontal2 = 0, horizontal3 = 0, horizontal4 = 0, horizontal5 = 0;
	bool bingoTruFal = false;
	int n = 0;

	//[RDQ]Make The Midle of The Card into *

	for (int playerNum = 0; playerNum < 3; playerNum++)
	{
		for (int cardNum = 0; cardNum < 3; cardNum++)
		{
			arrayDisplayCard[playerNum][cardNum][2][2] = '*';
			for (int count = 0; count < 5; count = count + 1)
			{
				if (arrayDisplayCard[playerNum][cardNum][count][count] == '*') //[RDQ]Check Diagonal Line (\)
				{
					diagonal1 = diagonal1 + 1;
					if (diagonal1 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][count][4 - count] == '*') //[RDQ]Check Diagonal Line (/)
				{
					diagonal2 = diagonal2 + 1;
					if (diagonal2 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][count][0] == '*') //[RDQ]Check Vertical Line in Column 1
				{
					vertical1 = vertical1 + 1;
					if (vertical1 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][count][1] == '*') //[RDQ]Check Vertical Line in Column 2
				{
					vertical2 = vertical2 + 1;
					if (vertical2 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][count][2] == '*') //[RDQ]Check Vertical Line in Column 3
				{
					vertical3 = vertical3 + 1;
					if (vertical3 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][count][3] == '*') //[RDQ]Check Vertical Line in Column 4
				{
					vertical4 = vertical4 + 1;
					if (vertical4 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][count][4] == '*') //[RDQ]Check Vertical Line in Column 5
				{
					vertical5 = vertical5 + 1;
					if (vertical5 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][0][count] == '*') //[RDQ]Check Horizontal Line in Row 1
				{
					horizontal1 = horizontal1 + 1;
					if (horizontal1 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][1][count] == '*') //[RDQ]Check Horizontal Line in Row 2
				{
					horizontal2 = horizontal2 + 1;
					if (horizontal2 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][2][count] == '*') //[RDQ]Check Horizontal Line in Row 3
				{
					horizontal3 = horizontal3 + 1;
					if (horizontal3 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][3][count] == '*') //[RDQ]Check Horizontal Line in Row 4
				{
					horizontal4 = horizontal4 + 1;
					if (horizontal4 == 5)
						n++;
				}
				if (arrayDisplayCard[playerNum][cardNum][4][count] == '*') //[RDQ]Check Horizontal Line in Row 5
				{
					horizontal5 = horizontal5 + 1;
					if (horizontal5 == 5)
						n++;
				}

			}
			if (n == 1)
			{
				check1 = true;
				DisplayCard();
				cout << "Player " << playerNum + 1 << " card " << cardNum + 1 << " has BINGO! " << endl;
				player1 = playerNum + 1;
				playerNum = 100;
				cardNum = 100;

			}
			diagonal1 = 0, diagonal2 = 0, vertical1 = 0, vertical2 = 0, vertical3 = 0, vertical4 = 0, vertical5 = 0, horizontal1 = 0, horizontal2 = 0, horizontal3 = 0, horizontal4 = 0, horizontal5 = 0; //Resets the values for the new card
		}
	}
}

void BingoCard::MarkTheCard(int randNum)
{
	for (int playerNum = 0; playerNum < 3; playerNum++) //[DRS] a for loop for the player(& opponents)
	{
		for (int cardNum = 0; cardNum < 3; cardNum++) //[DRS] a for loop to see if the specific card has the mark
		{
			for (int rowCount = 0; rowCount < 5; rowCount = rowCount + 1) //[DRS] a for loop to see if the specific row has the mark card
			{
				for (int colCount = 0; colCount < 5; colCount = colCount + 1) //[DRS] a for loop to see if the specific column has the mark card
				{
					if (bingoCardArray[playerNum][cardNum][rowCount][colCount] == randNum)
					{
						arrayDisplayCard[playerNum][cardNum][rowCount][colCount] = '*'; //[DRS] if bingoCardArray is equal to random number, arrayDisplayCard will become '*'
					}
				}
			}
		}
	}
}

void BingoCard::DisplayRandomNumber(int count, int randomNumber)
{
	for (int i = 0; i < 500; i++) //[AMO] and [RDQ]Stores the random generated numbers into bingoNumberStore (first number)
	{
		if (bingoNumbersStore[i] == 0 && i == count - 1)
		{
			bingoNumbersStore[i] = randomNumber;
		}
	}
	for (int i = 1; i < 500; i++)//[AMO] and [RDQ]Sets the other number except the first number and second number into 0 
	{
		if (i == count)
			bingoNumbersStore[i] = 0;
	}
	//[LJL]Display How Many Round It Has Been and Display The Random Number
	if (randomNumber <= 15)
	{
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] This changes the color of the next output to white
		cout << setw(105) << right << "  " << "                 ROUND " << count << "                      \n" << endl;
		cout << setw(107) << right << "  " << "            BINGO NO. ";
		SetConsoleTextAttribute(h, 4);//[AMO] and [DRS]changes the color of the next output to red
		cout << randomNumber << "                        \n" << endl;
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS]changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS]changes the color of the next output to white

	}
	else if (randomNumber >= 16 && randomNumber <= 30)
	{
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] This changes the color of the next output to white
		cout << setw(105) << right << "  " << "                 ROUND " << count << "                         \n" << endl;
		cout << setw(107) << right << "  " << "            BINGO NO. ";
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << randomNumber << "                        \n" << endl;
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] This changes the color of the next output to white
	}
	else if (randomNumber >= 31 && randomNumber <= 45)
	{
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] This changes the color of the next output to white
		cout << setw(105) << right << "  " << "                 ROUND " << count << "                         \n" << endl;
		cout << setw(107) << right << "  " << "            BINGO NO. ";
		SetConsoleTextAttribute(h, 14);//[AMO] and [DRS] This changes the color of the next output to yellow
		cout << randomNumber << "                        \n" << endl;
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] This changes the color of the next output to white
	}
	else if (randomNumber >= 46 && randomNumber <= 60)
	{
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);
		cout << setw(105) << right << "  " << "                 ROUND " << count << "                         \n" << endl;
		cout << setw(107) << right << "  " << "            BINGO NO. ";
		SetConsoleTextAttribute(h, 10);//[AMO] and [DRS] This changes the color of the next output to light green
		cout << randomNumber << "                        \n" << endl;
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] This changes the color of the next output to white
	}
	else if (randomNumber >= 61 && randomNumber <= 75)
	{
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] This changes the color of the next output to white
		cout << setw(105) << right << "  " << "                 ROUND " << count << "                         \n" << endl;
		cout << setw(107) << right << "  " << "            BINGO NO. ";
		SetConsoleTextAttribute(h, ConsoleColors::FuchsiaFore);//[AMO] and [DRS] This changes the color of the next output to Fuchsia
		cout << randomNumber << "                        \n" << endl;
		SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] This changes the color of the next output to cyan
		cout << setw(100) << right << "  " << "=====================================================\n" << endl;
		SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] This changes the color of the next output to white
	}
}

int BingoCard::GenerateRandomNumber(bool rNum)
{
	bool endLoop = false;
	int nums, randNum;
	static bool maxNum[76]; //[LJL] Values From 1 to 75
	static int numOfPicked = 0; //[LJL] Count the number of Picked Numbers
	const int MAX_NUM_PICK = 75;

	if (rNum == true)
	{
		for (nums = 0; nums < 75; ++nums)
		{
			maxNum[nums] = false; //[LJL] Make all Number in Arrays to be False means it has not been used

		}
	}

	do
	{
		randNum = rand() % 75 + 1; //[LJL] Get Random Number From 1 to 75
		if (maxNum[randNum] == false) //[LJL] If the Generated Random Number in the Array is False it Will Continue
		{
			numOfPicked = numOfPicked + 1; //[LJL] To Keep Count
			maxNum[randNum] = true; //[LJL] It will become true so that it will not repeat again
			endLoop = true; //[LJL] To Stop the Loop
			if (numOfPicked == MAX_NUM_PICK) //[LJL] Means The Number From 1 to 75 Has all been Called
			{
				endLoop = true;

			}
		}
	} while (endLoop == false); //[LJL] Continue to Loop if the bool is False
	return randNum; //[LJL] Will Return the Generated Random Number 
}

void BingoResult::Congratulate()
{

	cout << "Congratulation!! For Winning the Game!! "; //[LJL] Display Congratulatory Message

}

void BingoHumanWin::Congratulate()
{
	cout << "Congratulation Human!! For Winning the Game!!, The Player Win The Game. \2" << endl; //[AMO] "\2" displays a smiley face in the console
}

void BingoBotWin::Congratulate()
{
	cout << "Congratulation Bot!! For Winning the Game!!, The bot win the game \2" << endl;
}

void BingoDisplay::GameStart()
{
	//[LJL] Displayed The Creators of The Game
	do
	{
	SetConsoleTextAttribute(h, 11);

	for (int i = 0; i <= 8; i++)
		cout << "\n";
	artsInDisplay.IntroDisplay();
	cout << endl;
	cout << setw(95) << right << "  " << "   //PRESS ENTER TO START THE GAME..//  ";
	enter = _getch();
	system("cls");
	} while (enter != '\r');
	system("cls");
}

void BingoDisplay::GameInstructions() {

	do
	{
	SetConsoleTextAttribute(h, 11); //[DRS] changes color of text to light cyan
	artsInDisplay.InstructionsDisplay();
	SetConsoleTextAttribute(h, 10);

	cout << setw(95) << " " << "1. The player has 3 cards that shows how close they " << endl;
	cout << setw(95) << " " << "   are to winning" << endl;
	cout << setw(95) << " " << "2. You will face against 2 Bots " << endl;
	cout << setw(95) << " " << "3. A random generated number will mark the" << endl;
	cout << setw(95) << " " << "   player's Card if it matches " << endl;
	cout << setw(95) << " " << "4. To get a win, you need to get a straight line " << endl;
	cout << setw(95) << " " << "   whether it is a horizontal, vertical or diagonal. " << endl;
	cout << setw(95) << " " << "5. After game ends, the program will tell the player" << endl;
	cout << setw(95) << " " << "   how to player again" << endl;
	cout << setw(95) << " " << "6. Have Fun!\2\n" << endl; //[AMO] \2 outputs a smiley face in the console

	SetConsoleTextAttribute(h, 11); //[DRS] changes color of text to light cyan

	cout << setw(95) << right << "  " << "---------------------------------------------------\n" << endl;

	SetConsoleTextAttribute(h, 7); //[DRS] changes color of text to light gray
	
	
		cout << setw(95) << right << "  " << "Press Enter to Start" << endl;
		cout << setw(95) << right << " ";
		enter = _getch();
		system("cls");
	} while (enter != '\r');
	system("cls"); //[DRS] to clear screen for next output display
}

void BingoDisplay::CallNextNum()
{
	do
	{
		cout << "Press Enter to Call the Next Number." << endl;
		enter = _getch();

	} while (enter != '\r');
}

void BingoDisplay::GameHeader()
{
	//[LJL] Welcomes the player
	do
	{
	for (int i = 0; i <= 22; i++)
		cout << "\n";
	cout << setw(105) << "=====" << " B " << " I " << " N " << " G " << " O " << " G " << " A " << " M " << " E " << "=====" << endl; //150
	cout << setw(110) << "=====" << "Let's play bingo!" << "=====" << endl;
	cout << endl << endl;
	//[LJL] Display Some Information About the Game
	cout << setw(110) << "Reminders: " << endl;
	SetConsoleTextAttribute(h, 4); //[AMO] AND [DRS] Changes the color of the next output to Red
	cout << setw(105) << " B ";
	SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] Sets the next output to white
	cout << " column are between  1 and 15" << endl;
	SetConsoleTextAttribute(h, 3);//[AMO] and [DRS] Sets the next output to Cyan
	cout << setw(105) << " I ";
	SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] Sets the next output to white
	cout << " column are between 16 and 30" << endl;
	SetConsoleTextAttribute(h, 14);//[AMO] and [DRS] Sets the next output to Yellow
	cout << setw(105) << " N ";
	SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] Sets the next output to white
	cout << " column are between 31 and 45" << endl;
	SetConsoleTextAttribute(h, 10);//[AMO] and [DRS] Sets the next output to Light green
	cout << setw(105) << " G ";
	SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] Sets the next output to white
	cout << " column are between 46 and 60" << endl;
	SetConsoleTextAttribute(h, ConsoleColors::FuchsiaFore);//[AMO] and [DRS] Sets the next output to Fuchsia
	cout << setw(105) << " O ";
	SetConsoleTextAttribute(h, 15);//[AMO] and [DRS] Sets the next output to white
	cout << " column are between 61 and 75" << endl;

	cout << endl;
		cout << setw(110) << "\t\t\t\t    //PRESS ENTER TO CONTINUE THE GAME..//" << endl;
		cout << setw(100) << "";
		enter = _getch();
		system("cls");
	} while (enter != '\r');
	system("cls");
}

void BingoDisplay::PlayAgain()
{
	cout << "Run the code if you want to play again " << endl;
	artsInDisplay.ThankYouDisplay(); //[AMO] Calls the function that outputs thank you to the user
}

void BingoDisplay::BeforeGameText()
{
	for (int i = 0; i < 16; i++) //[AMO] and [DRS] This loop allows the program to loop all the colors
	{
		switch (i)
		{
		case 0: //[AMO] and [DRS] This case sets the text to black
			SetConsoleTextAttribute(h, i);
			break;
		case 1://[AMO] and [DRS] This case sets the text to blue
			SetConsoleTextAttribute(h, i);
			break;
		case 2://[AMO] and [DRS] This case sets the text to green
			SetConsoleTextAttribute(h, i);
			break;
		case 3://[AMO] and [DRS] This case sets the text to cyan
			SetConsoleTextAttribute(h, i);
			break;
		case 4://[AMO] and [DRS] This case sets the text to red
			SetConsoleTextAttribute(h, i);
			break;
		case 5://[AMO] and [DRS] This case sets the text to magenta
			SetConsoleTextAttribute(h, i);
			break;
		case 6://[AMO] and [DRS] This case sets the text to brown
			SetConsoleTextAttribute(h, i);
			break;
		case 7://[AMO] and [DRS] This case sets the text to light gray
			SetConsoleTextAttribute(h, i);
			break;
		case 8://[AMO] and [DRS] This case sets the text to dark gray
			SetConsoleTextAttribute(h, i);
			break;
		case 9://[AMO] and [DRS] This case sets the text to light blue
			SetConsoleTextAttribute(h, i);
			break;
		case 10://[AMO] and [DRS] This case sets the text to light green
			SetConsoleTextAttribute(h, i);
			break;
		case 11://[AMO] and [DRS] This case sets the text to light cyan
			SetConsoleTextAttribute(h, i);
			break;
		case 12://[AMO] and [DRS] This case sets the text to light red
			SetConsoleTextAttribute(h, i);
			break;
		case 13://[AMO] and [DRS] This case sets the text to light magenta
			SetConsoleTextAttribute(h, i);
			break;
		case 14://[AMO] and [DRS] This case sets the text to yellow
			SetConsoleTextAttribute(h, i);
			break;
		case 15://[AMO] and [DRS] This case sets the text to white
			SetConsoleTextAttribute(h, i);
			break;
		}
		for (int j = 0; j <= 28; j++) //[AMO] and [DRS] This for loop creates 28 spaces below
			cout << "\n";
		artsInDisplay.LoadingScreenDisplay(i); //[AMO]  Composition example
		Timer(1); //[AMO] and [DRS] This creates a delay between the changing of colors
		system("cls");//[AMO] and [DRS] Creates an illusion that it is changing
	}
	
}
void BingoDisplay::Timer(unsigned long sec)
{
	Sleep(sec * 800); //[AMO] and [DRS]This allows a delay. 
}
void BingoCard::Timer(unsigned long sec)
{
	Sleep(sec * 500); //[AMO] and [DRS]This allows a delay. 
}
void BingoPlayer::Timer(unsigned long sec)
{
	Sleep(sec * 1000); //[AMO] and [DRS]This allows a delay. 
}
void DisplayArt::LogInDisplay()
{
	cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
	cout << setw(87) << right << "  " << "||                              LOGIN                              ||\n" << endl;
	cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
}
void DisplayArt::InstructionsDisplay()
{
	cout << setw(95) << right << "  " << "=====================================================\n" << endl;
	cout << setw(95) << right << "  " << "||                 GAME INSTRUCTIONS               ||\n" << endl;
	cout << setw(95) << right << "  " << "=====================================================\n" << endl;
}
void DisplayArt::LoadingScreenDisplay(int num)
{
	cout << setw(95) << " " << hashtag << endl;//[AMO]  Composition and user-defined constructors example
	cout << setw(95) << " " << "##                                       ##" << endl;
	cout << setw(95) << " " << "##          B I N G O  G A M E           ##" << endl;
	cout << setw(95) << " " << "##        Created by Mosh Attack         ##" << endl;
	cout << setw(95) << " " << "##             LOADING SCREEN            ##" << endl;
	cout << setw(95) << " " << "##      Let the spades reach the line    ##" << endl;
	cout << setw(95) << " " << hashtag << endl;//[AMO]  Composition and user-defined constructors example
	cout << setw(109) << " ";
	switch (num)
	{
	case 0:
		cout << "\0";
		break;
	case 1:
		cout << "\5"; //[AMO] \5 displays a spade in the screen
		break;
	case 2:
		cout << "\5\5";
		break;
	case 3:
		cout << "\5\5\5";
		break;
	case 4:
		cout << "\5\5\5\5";
		break;
	case 5:
		cout << "\5\5\5\5\5";
		break;
	case 6:
		cout << "\5\5\5\5\5\5";
		break;
	case 7:
		cout << "\5\5\5\5\5\5\5";
		break;
	case 8:
		cout << "\5\5\5\5\5\5\5\5";
		break;
	case 9:
		cout << "\5\5\5\5\5\5\5\5\5";
		break;
	case 10:
		cout << "\5\5\5\5\5\5\5\5\5\5";
		break;
	case 11:
		cout << "\5\5\5\5\5\5\5\5\5\5\5";
		break;
	case 12:
		cout << "\5\5\5\5\5\5\5\5\5\5\5\5";
		break;
	case 13:
		cout << "\5\5\5\5\5\5\5\5\5\5\5\5\5";
		break;
	case 14:
		cout << "\5\5\5\5\5\5\5\5\5\5\5\5\5\5";
		break;
	case 15:
		cout << "\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5";
		break;
	}
	cout << endl;
	cout << setw(109) << " "<< "|" << "             |" << endl;
}
void DisplayArt::IntroDisplay()
{
	cout << setw(95) << " " << hashtag << endl;
	cout << setw(95) << " " << "#          B I N G O  G A M E             #" << endl;
	cout << setw(95) << " " << "#        Created by Mosh Attack           #" << endl;
	cout << setw(95) << " " << "#                                         #" << endl;
	cout << setw(95) << " " << "#         Domingo  Paco  Quizon           #" << endl;
	cout << setw(95) << " " << "#         Ordas  Leynes  Santos           #" << endl;
	cout << setw(95) << " " << "#                                         #" << endl;
	cout << setw(95) << " " << "#               //2021//                  #" << endl;
	cout << setw(95) << " " << hashtag << endl;
}

void DisplayArt::ThankYouDisplay()
{
	
	SetConsoleTextAttribute(h, 14); //[AMO] Set the next output to yellow
	cout << setw(95) << " " << "##########################################" << endl;
	SetConsoleTextAttribute(h, 4); //[AMO] Set the next output to red
	cout << setw(95) << " " << "\3"; //[AMO] "\3" displays a heart in the console
	SetConsoleTextAttribute(h, 14);
	cout << "           B I N G O  G A M E           ";
	SetConsoleTextAttribute(h, 4);
	cout << "\3" << endl;
	cout << setw(95) << " " << "\3";
	SetConsoleTextAttribute(h, 14);
	cout << "         Created by Mosh Attack         ";
	SetConsoleTextAttribute(h, 4);
	cout << "\3" << endl;
	cout << setw(95) << " " << "\3                                        \3" << endl;
	cout << setw(95) << " " << "\3         ";
	SetConsoleTextAttribute(h, 14);
	cout << " Thanks for playing!";
	SetConsoleTextAttribute(h, 4);
	cout << "\3          \3" << endl;
	cout << setw(95) << " " << "\3                 ";
	SetConsoleTextAttribute(h, 14);
	cout << "  \2                    ";
	SetConsoleTextAttribute(h, 4);
	cout << "\3" << endl;
	cout << setw(95) << " " << "\3                 ";
	SetConsoleTextAttribute(h, 14);
	cout << "  \2                    ";//[AMO] "\2" displays a smiley face in the console
	SetConsoleTextAttribute(h, 4);
	cout << "\3" << endl;
	cout << setw(95) << " " << "\3               ";
	SetConsoleTextAttribute(h, 14);
	cout << " //2021//                ";
	SetConsoleTextAttribute(h, 4);
	cout << "\3" << endl;
	SetConsoleTextAttribute(h, 14);
	cout << setw(95) << " " << "##########################################" << endl;
	SetConsoleTextAttribute(h, 15);
}
void BingoCard::ShowRandomNumbersAtTheEnd(int count)
{
	cout << "Random generated numbers: "; 
	for (int i = 0; i <= count-1; i++)
	{
		SetConsoleTextAttribute(h, 2);
		cout << bingoNumbersStore[i] << " ";
		SetConsoleTextAttribute(h, 15);
	}
	cout << endl;
}
#endif //!BINGOGAME_H

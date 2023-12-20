#include "moshAttackH.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <Windows.h>
#include <cstdlib>


using namespace std;

int main ()
{
	system ("title Bingo Game by Mosh Attack"); //[AMO] AND [DRS] Changes the title of the command prompt to Bingo Game by Mosh Attack
	BingoCard bingCard;
	BingoHumanWin winPlayer;
	BingoHumanWin* pointerWinPlayer = &winPlayer; //[AMO] This is an example of using pointers in classes
	BingoBotWin winBot;
	BingoBotWin* pointerWinBot = &winBot; //[AMO] This is an example of using pointers in classes
	DisplayArt art("###########################################");
	BingoDisplay display(art); //[AMO] and [DRS] Composition example
	BingoPlayer player("Enter your UserName (Max Characters is 10,blank space is not allowed):  ", art);//[AMO] and [DRS] Composition example
	srand(static_cast<int>(time(0)));
	//[AMO] Variable Declaration
	int mainRandomNumber;
	bool numberCalling;
	int count = 0, playerNum = 0,age3 = 0;
	bool checkIfBingo = false;
	numberCalling = true;
	display.GameStart ();//[EKP] Calls the function that shows the creators and the title of the game
	display.GameInstructions ();//[EKP] Calls the function that displays the game instructions
	player.PromptPlayer();//[EKP] Calls the function that prompts the player to enter his/her name and username
	player.DisplayPlayerInfo ();//[EKP] Calls the function that displays the Player Informations
	player.PrintPlayerInfo ();//[EKP] Calls the function that prepares the txt file which contains the information of the players
	display.GameHeader (); //[LJL] Display The Header
	bingCard.FillCard (); //[LJL] Fill the Card Before we Display
	display.BeforeGameText ();//[EKP] Calls the function that gives an illusion of a loading screen
	while (checkIfBingo == false)
	{
		bingCard.DisplayCard ();//[EKP] Calls the function that displays the bingo card
		display.CallNextNum ();//[EKP] Calls the function that prompts the user to enter to call the next card
		if (numberCalling == true)
		{
			mainRandomNumber = bingCard.GenerateRandomNumber (true); //[AMO]Call The Function GenerateRandomNumber to Call the Next Number
			numberCalling = false;
		}
		else
		{
			mainRandomNumber = bingCard.GenerateRandomNumber (false);//[AMO]Call The Function GenerateRandomNumber to Call the Next Number
		}
		++count;
		system ("cls");//[AMO] and [DRS] This erases the cards in the previous rounds to give space to the next round
		bingCard.DisplayRandomNumber (count, mainRandomNumber); //[LJL] Function That Display Round And The Generated Random Number
		bingCard.MarkTheCard (mainRandomNumber); //Call a Funtion to Mark The Bingo Card
		bingCard.CheckVerHorDiag (checkIfBingo, playerNum); //CheckIfBingo will get the Return Value
		if (checkIfBingo == true)
		{
			if (playerNum == 1)
				pointerWinPlayer->Congratulate(); //[AMO] Congratulates the player if he/she wins
			else
				winBot.Congratulate();//[AMO] Congratulates the player if the bot wins
			cout << endl;
		}
	}
	bingCard.ShowRandomNumbersAtTheEnd(count); //[AMO] Calls the function that shows all the random generated numbers at the end
	display.PlayAgain (); //[AMO] Calls the function to tell the user what to do if he/she wants to play again
	system ("pause");

	return 0;
}



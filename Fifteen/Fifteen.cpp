// Fifteen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "FifteenGame.h"
#include "Fifteen.h"

FifteenGame Game;

void DrawGame(FifteenGame arg)
{

}

int main()
{
	//TODO 2. Show the initial configuration.
	 DrawGame(Game);
	//TODO 3. Repeat turns.
	// in an infinite loop:
	//		read turn
	//		if the turn is valid:
	//			make the turn
	//			if we won:
	//				show congratulations and exit
	//		else:
	//			tell about the illegal turn
    return 0;
}


// Fifteen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "FifteenGame.h"
#include "Fifteen.h"

FifteenGame Game;

void DrawGame(FifteenGame arg)
{
	for (int y = 0;y < 4;y++) {
		for (int x = 0;x < 4;x++)
		{
			try
			{
				auto g = Game.GetCell(x, y);
				if (g < 10) cout << " ";
				if (g == 16) cout << "   ";
				else cout << g << " ";
			}
			catch (const std::exception& e)
			{
				cout << "\nException: " << e.what() << "\n";
			}

		}
		cout << "\n";
	}
}

int main()
{	
	//TODO 3. Repeat turns.
	int turn;
	string input;
	while (true)
	{
		DrawGame(Game);
		cout << "Your turn, Maestro (0 to end the game): ";
		getline(cin, input);
		stringstream myStream(input);
		if (!(myStream >> turn))
		{
			cout << "\""<<input<<"\" is most definitely not a number." << endl;
			continue;
		}		
		if (turn == 0) { cout << "Thanks for playing!"; return 0; }

		//	make the turn
		//		if we made the turn:
		//			if we won:
		//				show congratulations and exit
		//		else:
		//			tell about the illegal turn
	}
	return 0;
}


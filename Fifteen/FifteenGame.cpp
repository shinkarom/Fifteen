#include "stdafx.h"
#include "FifteenGame.h"


void FifteenGame::GenerateNew()
{
	Playfield.clear();
	for (int x = 1;x <= 16;x++) Playfield.push_back(x);
}

FifteenGame::FifteenGame()
{
	GenerateNew();
}


FifteenGame::~FifteenGame()
{
}

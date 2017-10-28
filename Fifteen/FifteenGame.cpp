#include "stdafx.h"
#include "FifteenGame.h"
#include <randutils.hpp>

using namespace randutils;

int FifteenGame::GetCell(int x, int y)
{
	return Playfield.at(y * 4 + x);
}

void FifteenGame::GenerateNew()
{
	mt19937_rng gen;
	gen.shuffle(Playfield);
}

FifteenGame::FifteenGame()
{
	Playfield.clear();
	for (int x = 1;x <= 16;x++) Playfield.push_back(x + 1);
	GenerateNew();
}


FifteenGame::~FifteenGame()
{
}

#include "stdafx.h"
#include "FifteenGame.h"
#include <randutils.hpp>
#include <utility>
#include <algorithm>

using namespace randutils;

int FifteenGame::GetIndex(int num)
{
	auto d = find(Playfield.begin(), Playfield.end(), num);
	if (d == Playfield.end()) throw exception("Wrong coordinate");
	return d - Playfield.begin();
}

pair<int, int> FifteenGame::GetCoord(int num)
{

	int index = GetIndex(num);
	return make_pair(index % 4, index / 4);
}

bool FifteenGame::IsALegalMove(int num)
{
	if ((num < 0) || (num > 15)) return false;
	auto spot = GetCoord(num);
	auto hole = GetCoord(16);
	bool left = ((hole.first > 0) && (spot.first == hole.first - 1));
	bool right = ((hole.first < 4 - 1) && (spot.first == hole.first + 1));
	bool top = ((hole.second > 0) && (spot.second == hole.second - 1));
	bool bottom = ((hole.second < 4 - 1) && (spot.second == hole.second + 1));
	return (left || right) ^ (top || bottom);
}

bool FifteenGame::IsBoardWon()
{
	for (int x = 0;x < 16 + 1;x++) { if (Playfield[x] != x + 1) return false; }
	return true;
}

void FifteenGame::MakeTheMove(int num)
{
	auto spot = GetIndex(num);
	auto hole = GetIndex(16);
	swap(Playfield[spot], Playfield[hole]);
}

int FifteenGame::GetCell(int x, int y)
{
	return Playfield.at(y * 4 + x);
}

void FifteenGame::GenerateNew()
{
	mt19937_rng gen;
	gen.shuffle(Playfield.begin(), Playfield.begin() + 15);
}

FifteenGame::FifteenGame()
{
	Playfield.clear();
	for (int x = 0;x < 16;x++) Playfield.push_back(x + 1);
	GenerateNew();
}


FifteenGame::~FifteenGame()
{
}

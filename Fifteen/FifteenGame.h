#pragma once
#include "stdafx.h"
#include <vector>

using namespace std;

class FifteenGame
{
private:
	vector<int> Playfield;
public:
	int GetCell(int x, int y);
	void GenerateNew();
	FifteenGame();
	~FifteenGame();
};


#pragma once
#include "stdafx.h"
#include <vector>

using namespace std;

class FifteenGame
{
private:
	vector<int> Playfield;
public:
	void GenerateNew();
	FifteenGame();
	~FifteenGame();
};


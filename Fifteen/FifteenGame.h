#pragma once
#include "stdafx.h"
#include <vector>
#include <utility>
using namespace std;

class FifteenGame
{
public:
	bool IsALegalMove(int num);
	bool IsBoardWon();
	void MakeTheMove(int num);
	int GetCell(int x, int y);
	void GenerateNew();
	FifteenGame();
	~FifteenGame();
private:
	vector<int> Playfield;
	int GetIndex(int num);
	pair<int,int> GetCoord(int num);
};


#pragma once

#include <stdio.h>
#include <tchar.h>
#include <vector>

using namespace std;

struct fPoint
{
	int x;
	int y;
};

extern vector<fPoint> ground;
extern vector<fPoint> walls;
extern vector<fPoint> blocks;
extern vector<fPoint> breaking;
extern vector<fPoint> questionBlocks;

extern fPoint playerPos;

extern fPoint tmpAdd;

extern int level;

extern float gravity;

extern float xV;

extern int moveX;

extern char input;

extern int scrollX;

void StartLevel(int index);

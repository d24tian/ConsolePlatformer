#include "Header.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <ctime>
#include <vector>
#include <math.h>

using namespace std;

vector<fPoint> ground;
vector<fPoint> walls;
vector<fPoint> blocks;
vector<fPoint> breaking;
vector<fPoint> questionBlocks;

fPoint playerPos;

fPoint tmpAdd;

int moveX;

char input;

int level = 11;

float gravity = 0;

float xV = 0;

int scrollX = 0;

bool CheckGround (fPoint b)
{
    for (int i = 0; i < ground.size(); i++)
    {
        if (ground[i].x == b.x && ground[i].y == b.y)
        {
            return true;
        }
    }
    return false;
}

bool CheckWall (fPoint b)
{
    for (int i = 0; i < walls.size(); i++)
    {
        if (walls[i].x == b.x && walls[i].y == b.y)
        {
            return true;
        }
    }
    return false;
}

bool CheckBlock (fPoint b)
{
    for (int i = 0; i < blocks.size(); i++)
    {
        if (blocks[i].x == b.x && blocks[i].y == b.y)
        {
            return true;
        }
    }
    return false;
}

bool CheckQuestionBlock (fPoint b)
{
    for (int i = 0; i < questionBlocks.size(); i++)
    {
        if (questionBlocks[i].x == b.x && questionBlocks[i].y == b.y)
        {
            return true;
        }
    }
    return false;
}

bool CheckBreaking (fPoint b)
{
    for (int i = 0; i < breaking.size(); i++)
    {
        if (breaking[i].x == b.x && breaking[i].y == b.y)
        {
            return true;
        }
    }
    return false;
}

bool GroundBelow (fPoint b)
{
    for (int i = 0; i < ground.size(); i++)
    {
        if (ground[i].x == b.x && ground[i].y > b.y)
        {
            return true;
        }
    }

    for (int i = 0; i < blocks.size(); i++)
    {
        if (blocks[i].x == b.x && blocks[i].y > b.y)
        {
            return true;
        }
    }

    for (int i = 0; i < questionBlocks.size(); i++)
    {
        if (questionBlocks[i].x == b.x && questionBlocks[i].y > b.y)
        {
            return true;
        }
    }

    return false;
}

int DistanceToGround (fPoint b)
{
    int distance = 999;
    int location;
    int index = 0;

    for (int i = 0; i < ground.size(); i++)
    {
        if (ground[i].x == b.x && ground[i].y > b.y)
        {
            if (ground[i].y - b.y < distance)
            {
                distance = ground[i].y - b.y;
                location = i;
                index = 1;
            }
        }
    }

    for (int i = 0; i < blocks.size(); i++)
    {
        if (blocks[i].x == b.x && blocks[i].y > b.y)
        {
            if (blocks[i].y - b.y < distance)
            {
                distance = blocks[i].y - b.y;
                location = i;
                index = 2;
            }
        }
    }

    for (int i = 0; i < questionBlocks.size(); i++)
    {
        if (questionBlocks[i].x == b.x && questionBlocks[i].y > b.y)
        {
            if (questionBlocks[i].y - b.y < distance)
            {
                distance = questionBlocks[i].y - b.y;
                location = i;
                index = 3;
            }
        }
    }

    if (distance == 999)
    {
        return 999;
    }
    else
    {
        if (index == 0)
        {
            return 999;
        }
        else if (index == 1)
        {
            return ground[location].y - b.y - 1;
        }
        else if (index == 2)
        {
            return blocks[location].y - b.y - 1;
        }
        else if (index == 3)
        {
            return questionBlocks[location].y - b.y - 1;
        }
    }
}

bool BlockAbove (fPoint b)
{
    for (int i = 0; i < blocks.size(); i++)
    {
        if (blocks[i].x == b.x && blocks[i].y < b.y)
        {
            return true;
        }
    }

    for (int i = 0; i < questionBlocks.size(); i++)
    {
        if (questionBlocks[i].x == b.x && questionBlocks[i].y < b.y)
        {
            return true;
        }
    }

    return false;
}

int DistanceToCeiling (fPoint b)
{
    int distance = 999;
    int location;
    int index = 0;

    for (int i = 0; i < blocks.size(); i++)
    {
        if (blocks[i].x == b.x && blocks[i].y < b.y)
        {
            if (b.y - blocks[i].y < distance)
            {
                distance = b.y - blocks[i].y;
                location = i;
                index = 1;
            }
        }
    }

    for (int i = 0; i < questionBlocks.size(); i++)
    {
        if (questionBlocks[i].x == b.x && questionBlocks[i].y < b.y)
        {
            if (b.y - questionBlocks[i].y < distance)
            {
                distance = b.y - questionBlocks[i].y;
                location = i;
                index = 2;
            }
        }
    }

    if (distance == 999)
    {
        return 999;
    }
    else
    {
        if (index == 0)
        {
            return 999;
        }
        else if (index == 1)
        {
            return b.y - blocks[location].y - 1;
        }
        else if (index == 2)
        {
            return b.y - questionBlocks[location].y - 1;
        }
    }
}

void detectInput()
{
    if (GetAsyncKeyState(VK_LEFT))
    {
        fPoint tmpCheck;
        tmpCheck.x = playerPos.x - 1;
        tmpCheck.y = playerPos.y;

        if (!CheckWall(tmpCheck) && !CheckBlock(tmpCheck) && !CheckQuestionBlock(tmpCheck))
        {
            moveX = -1;
        }
    }

    if (GetAsyncKeyState(VK_RIGHT))
    {
        fPoint tmpCheck;
        tmpCheck.x = playerPos.x + 1;
        tmpCheck.y = playerPos.y;

        if (!CheckWall(tmpCheck) && !CheckBlock(tmpCheck) && !CheckQuestionBlock(tmpCheck))
        {
            moveX = 1;
        }
    }

    if (GetAsyncKeyState(VK_UP))
    {
        fPoint tmpPos;
        tmpPos.x = playerPos.x;
        tmpPos.y = playerPos.y + 1;

        if (CheckGround(tmpPos) || CheckBlock(tmpPos) || CheckQuestionBlock(tmpPos))
        {
            gravity = -3;
        }
    }
    /*
    else if (GetAsyncKeyState(VK_DOWN))
    {
        playerPos.y++;
    }
    */

    /*
    if(_kbhit())
    {
        char l = _getch();
        if(l == '1' || l == '2')
        {

        };
    }
    */
}

void movePosition ()
{
    fPoint tmpPos;
    tmpPos.x = playerPos.x;
    tmpPos.y = playerPos.y + 1;

    fPoint tmpPos2;
    tmpPos2.x = playerPos.x;
    tmpPos2.y = playerPos.y - 1;

    playerPos.x += moveX;
    if (playerPos.x > 10 + scrollX && moveX == 1)
    {
        scrollX++;
    }
    if (playerPos.x < 30 + scrollX && moveX == -1)
    {
        scrollX--;
    }

    moveX = 0;

    if (gravity < 3)
    {
        if (GroundBelow(playerPos))
        {
            if (!CheckGround(tmpPos) && !CheckBlock(tmpPos) && !CheckQuestionBlock(tmpPos))
            {
                if (DistanceToGround(playerPos) > gravity)
                {
                    gravity++;
                }
                else
                {
                    gravity = 0;
                    playerPos.y += DistanceToGround(playerPos);
                }
            }
        }
        else
        {
            gravity++;
        }
    }
    else
    {
        if (DistanceToGround(playerPos) > gravity || !GroundBelow(playerPos))
        {
            gravity = 3;
        }
        else
        {
            gravity = 0;
            playerPos.y += DistanceToGround(playerPos);
        }
    }

    if (BlockAbove(playerPos))
    {
        if (0 - DistanceToCeiling(playerPos) > gravity)
        {
            gravity = 1;
            playerPos.y -= DistanceToCeiling(playerPos);
            for (int i = 0; i < blocks.size(); i++)
            {
                if (blocks[i].x == playerPos.x && blocks[i].y == playerPos.y - 1)
                {
                    breaking.push_back(blocks[i]);
                    blocks.erase(blocks.begin() + i);
                }
            }
        }
    }

    if (GroundBelow(playerPos))
    {
        if (DistanceToGround(playerPos) > gravity)
        {
            playerPos.y += gravity;
        }
        else
        {
            gravity = 0;
            playerPos.y += DistanceToGround(playerPos);
        }
    }
    else
    {
        playerPos.y += gravity;
    }

    //xV *= 0.9;
}

bool CheckDeath ()
{
    if (playerPos.y > 20)
    {
        return true;
    }

    return false;
}

int main()
{
    srand((unsigned)time(0));

    playerPos.x = 2;
    playerPos.y = 15;

    StartLevel(level);

    while (true)
    {
        system("cls");          ///CLEAR CONSOLE

        for (int i = 0; i < 21; i++)            /// DRAW GAME
        {
            for (int j = 0; j < 20; j++)
            {
                fPoint tmpCheck;
                tmpCheck.x = j + scrollX;
                tmpCheck.y = i;

                if (i == playerPos.y && j + scrollX == playerPos.x)
                {
                    cout << "O ";
                }
                else if (CheckGround(tmpCheck))
                {
                    cout << "_ ";
                }
                else if (CheckWall(tmpCheck))
                {
                    cout << "| ";
                }
                else if (CheckQuestionBlock(tmpCheck))
                {
                    cout << "? ";
                }
                else if (CheckBreaking(tmpCheck))
                {
                    cout << "# ";
                }
                else if (CheckBlock(tmpCheck))
                {
                    cout << "[]";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }

        breaking.clear();

        detectInput();

        movePosition();

        if (CheckDeath())
        {
            scrollX = 0;

            playerPos.x = 2;
            playerPos.y = 15;

            StartLevel(level);
        }

        Sleep(100/3);
    }

    return 0;
}

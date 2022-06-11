#pragma once
#include "ConsoleSettings.h"
#include <windows.h>

void SetConsoleSize()
{
    HANDLE hOut;
    SMALL_RECT DisplayArea = { 0, 0, 0, 0 };
    int x = 125;
    int y = 55;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DisplayArea.Right = 84;
    DisplayArea.Bottom = 13;

    SetConsoleWindowInfo(hOut, TRUE, &DisplayArea);
}

void SetCursor(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

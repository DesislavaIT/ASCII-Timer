#pragma once

void SetCursor(int, int);

class ASCII_Timer
{
    int seconds;
    int minutes;
    int hours;
    int colorArr[6]; //There are 6 colors
    void PrintZero(int) const;
    void PrintOne(int) const;
    void PrintTwo(int) const;
    void PrintThree(int) const;
    void PrintFour(int) const;
    void PrintFive(int) const;
    void PrintSix(int) const;
    void PrintSeven(int) const;
    void PrintEight(int) const;
    void PrintNine(int) const;
    void ShowTimer(bool) const;
    bool ColorArrContainsThisColor(int) const;
public:
    ASCII_Timer(int, int, int);
    void Start();
};

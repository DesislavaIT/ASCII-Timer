#include <iostream>
#include <windows.h>
#include "ASCII_Timer.h"

//Global variable
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

//Console settings
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

//Input transformations
int TurnIntoSeconds(const unsigned long number)
{
    int result = number % 60;
    return result;
}

int TurnIntoMinutes(const unsigned long number)
{
    int result = number % 60;
    return result;
}

void CheckInput(long long number&)
{
    while (number <= 0)
    {
        std::cout << "Seconds must be greater than zero!\nEnter positive integer number for seconds: ";
        std::cin >> number;
    }

    while (number >= 360000)
    {
        std::cout << "Seconds must be smaller than 360 000!\nEnter positive integer number (smaller than 360 000) for seconds: ";
        std::cin >> number;
    }
}

//Main function
int main()
{
    SetConsoleSize();
    std::cout << "Enter positive integer number for seconds: ";
    long long number;
    std::cin >> number;
    CheckInput(number);

    //Clear console
    system("cls");
    SetCursor(0, 0);
    
    //Get input
    int seconds, minutes, hours;
    seconds = TurnIntoSeconds(number);
    number /= 60;
    minutes = TurnIntoMinutes(number);
    number /= 60;
    hours = number;
    
    //Create timer
    ASCII_Timer myTimer(hours, minutes, seconds);

    //Start timer
    myTimer.Start();

    return 0;
}


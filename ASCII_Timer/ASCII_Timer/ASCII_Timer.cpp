#include <iostream>
#include <windows.h>
#include "globals.h"
#include "inputTransformation.h"
#include "printing.h"
#include "consoleSettings.h"

int main()
{
	SetConsoleSize();
	std::cout << "Enter positive integer number for seconds: ";
	long long number;
	std::cin >> number;
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

	system("cls");
	SetCursor(0, 0);
	int seconds = 0, minutes = 0, hours = 0;
	seconds = TurnIntoSeconds(number);
	number /= 60;
	minutes = TurnIntoMinutes(number);
	number /= 60;
	hours = number;

	bool canDecreaseHours = true;
	bool canDecreaseMinutes = true;
	bool canDecreaseSeconds = true;
	while (hours != 0 || minutes != 0 || seconds != 0)
	{
		if (hours == 0 && minutes == 0 && seconds < 10)
		{
			for (int i = 0; i < 10; i++)
			{
				std::cout << "-------------------------------------------------------------------------------------" << std::endl;
				if (i % 2 == 0)
				{
					ShowTimer(hours, minutes, seconds, true);
				}
				else
				{
					ShowTimer(hours, minutes, seconds, false);
				}

				SetConsoleTextAttribute(handle, 7);
				std::cout << "-------------------------------------------------------------------------------------" << std::endl;
				Sleep(100);
				SetCursor(0, 0);
			}
		}
		else
		{
			std::cout << "-------------------------------------------------------------------------------------" << std::endl;
			ShowTimer(hours, minutes, seconds, false);
			SetConsoleTextAttribute(handle, 7);
			std::cout << "-------------------------------------------------------------------------------------" << std::endl;
			Sleep(1000);
			SetCursor(0, 0);
		}

		if (canDecreaseSeconds)
		{
			seconds--;
		}

		if (seconds < 0)
		{
			if (canDecreaseMinutes)
			{
				seconds = 59;
				minutes--;
			}
			else
			{
				canDecreaseSeconds = false;
				minutes = 0;
			}

			if (minutes < 0)
			{
				if (canDecreaseHours)
				{
					minutes = 59;
					hours--;
				}
				else
				{
					canDecreaseMinutes = false;
					minutes = 0;
				}

				if (hours == 0)
				{
					canDecreaseHours = false;
				}
			}
		}
	}

	SetCursor(0, 0);
	SetConsoleTextAttribute(handle, 7);
	std::cout << "-------------------------------------------------------------------------------------" << std::endl;
	ShowTimer(hours, minutes, seconds, false);
	SetConsoleTextAttribute(handle, 7);
	std::cout << "-------------------------------------------------------------------------------------" << std::endl;
	bool played = PlaySound(TEXT("Bomb.wav"), NULL, SND_SYNC);

	return 0;
}
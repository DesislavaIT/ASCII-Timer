#include <iostream>
#include <windows.h>

using namespace std;

HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

int TurnIntoSeconds(unsigned long number)
{
	int result = number % 60;
	return result;
}

int TurnIntoMinutes(unsigned long number)
{
	int result = number % 60;
	return result;
}

void PrintZero(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "0000000000   ";
		break;
	case 2:
		std::cout << "0        0   ";
		break;
	case 3:
		std::cout << "0        0   ";
		break;
	case 4:
		std::cout << "0        0   ";
		break;
	case 5:
		std::cout << "0        0   ";
		break;
	case 6:
		std::cout << "0        0   ";
		break;
	case 7:
		std::cout << "0        0   ";
		break;
	case 8:
		std::cout << "0        0   ";
		break;
	case 9:
		std::cout << "0        0   ";
		break;
	case 10:
		std::cout << "0        0   ";
		break;
	case 11:
		std::cout << "0000000000   ";
		break;
	}
}

void PrintOne(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "     1       ";
		break;
	case 2:
		std::cout << "    11       ";
		break;
	case 3:
		std::cout << "   1 1       ";
		break;
	case 4:
		std::cout << "     1       ";
		break;
	case 5:
		std::cout << "     1       ";
		break;
	case 6:
		std::cout << "     1       ";
		break;
	case 7:
		std::cout << "     1       ";
		break;
	case 8:
		std::cout << "     1       ";
		break;
	case 9:
		std::cout << "     1       ";
		break;
	case 10:
		std::cout << "     1       ";
		break;
	case 11:
		std::cout << "1111111111   ";
		break;
	}
}

void PrintTwo(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "2222222222   ";
		break;
	case 2:
		std::cout << "         2   ";
		break;
	case 3:
		std::cout << "         2   ";
		break;
	case 4:
		std::cout << "         2   ";
		break;
	case 5:
		std::cout << "         2   ";
		break;
	case 6:
		std::cout << "2222222222   ";
		break;
	case 7:
		std::cout << "2            ";
		break;
	case 8:
		std::cout << "2            ";
		break;
	case 9:
		std::cout << "2            ";
		break;
	case 10:
		std::cout << "2            ";
		break;
	case 11:
		std::cout << "2222222222   ";
		break;
	}
}

void PrintThree(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "3333333333   ";
		break;
	case 2:
		std::cout << "         3   ";
		break;
	case 3:
		std::cout << "         3   ";
		break;
	case 4:
		std::cout << "         3   ";
		break;
	case 5:
		std::cout << "         3   ";
		break;
	case 6:
		std::cout << "3333333333   ";
		break;
	case 7:
		std::cout << "         3   ";
		break;
	case 8:
		std::cout << "         3   ";
		break;
	case 9:
		std::cout << "         3   ";
		break;
	case 10:
		std::cout << "         3   ";
		break;
	case 11:
		std::cout << "3333333333   ";
		break;
	}
}

void PrintFour(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "4        4   ";
		break;
	case 2:
		std::cout << "4        4   ";
		break;
	case 3:
		std::cout << "4        4   ";
		break;
	case 4:
		std::cout << "4        4   ";
		break;
	case 5:
		std::cout << "4        4   ";
		break;
	case 6:
		std::cout << "4444444444   ";
		break;
	case 7:
		std::cout << "         4   ";
		break;
	case 8:
		std::cout << "         4   ";
		break;
	case 9:
		std::cout << "         4   ";
		break;
	case 10:
		std::cout << "         4   ";
		break;
	case 11:
		std::cout << "         4   ";
		break;
	}
}

void PrintFive(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "5555555555   ";
		break;
	case 2:
		std::cout << "5            ";
		break;
	case 3:
		std::cout << "5            ";
		break;
	case 4:
		std::cout << "5            ";
		break;
	case 5:
		std::cout << "5            ";
		break;
	case 6:
		std::cout << "5555555555   ";
		break;
	case 7:
		std::cout << "         5   ";
		break;
	case 8:
		std::cout << "         5   ";
		break;
	case 9:
		std::cout << "         5   ";
		break;
	case 10:
		std::cout << "         5   ";
		break;
	case 11:
		std::cout << "5555555555   ";
		break;
	}
}

void PrintSix(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "6666666666   ";
		break;
	case 2:
		std::cout << "6            ";
		break;
	case 3:
		std::cout << "6            ";
		break;
	case 4:
		std::cout << "6            ";
		break;
	case 5:
		std::cout << "6            ";
		break;
	case 6:
		std::cout << "6666666666   ";
		break;
	case 7:
		std::cout << "6        6   ";
		break;
	case 8:
		std::cout << "6        6   ";
		break;
	case 9:
		std::cout << "6        6   ";
		break;
	case 10:
		std::cout << "6        6   ";
		break;
	case 11:
		std::cout << "6666666666   ";
		break;
	}
}

void PrintSeven(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "7777777777   ";
		break;
	case 2:
		std::cout << "         7   ";
		break;
	case 3:
		std::cout << "        7    ";
		break;
	case 4:
		std::cout << "       7     ";
		break;
	case 5:
		std::cout << "      7      ";
		break;
	case 6:
		std::cout << "     7       ";
		break;
	case 7:
		std::cout << "    7        ";
		break;
	case 8:
		std::cout << "   7         ";
		break;
	case 9:
		std::cout << "  7          ";
		break;
	case 10:
		std::cout << " 7           ";
		break;
	case 11:
		std::cout << "7            ";
		break;
	}
}

void PrintEight(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "8888888888   ";
		break;
	case 2:
		std::cout << "8        8   ";
		break;
	case 3:
		std::cout << "8        8   ";
		break;
	case 4:
		std::cout << "8        8   ";
		break;
	case 5:
		std::cout << "8        8   ";
		break;
	case 6:
		std::cout << "8888888888   ";
		break;
	case 7:
		std::cout << "8        8   ";
		break;
	case 8:
		std::cout << "8        8   ";
		break;
	case 9:
		std::cout << "8        8   ";
		break;
	case 10:
		std::cout << "8        8   ";
		break;
	case 11:
		std::cout << "8888888888   ";
		break;
	}
}

void PrintNine(int line)
{
	switch (line)
	{
	case 1:
		std::cout << "9999999999   ";
		break;
	case 2:
		std::cout << "9        9   ";
		break;
	case 3:
		std::cout << "9        9   ";
		break;
	case 4:
		std::cout << "9        9   ";
		break;
	case 5:
		std::cout << "9        9   ";
		break;
	case 6:
		std::cout << "9999999999   ";
		break;
	case 7:
		std::cout << "         9   ";
		break;
	case 8:
		std::cout << "         9   ";
		break;
	case 9:
		std::cout << "         9   ";
		break;
	case 10:
		std::cout << "         9   ";
		break;
	case 11:
		std::cout << "9999999999   ";
		break;
	}
}

bool ColorArrContainsThisColor(int arr[6], int color)
{
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == color)
		{
			return true;
		}
	}

	return false;
}

void ShowTimer(int hours, int minutes, int seconds, bool flag)
{
	int hours1 = hours / 10;
	int hours2 = hours % 10;
	int minutes1 = minutes / 10;
	int minutes2 = minutes % 10;
	int seconds1 = seconds / 10;
	int seconds2 = seconds % 10;
	int colorArr[6] = { 0 };
	int random = rand() % 6 + 10;
	colorArr[0] = random;

	random = rand() % 6 + 10;
	while (ColorArrContainsThisColor(colorArr, random))
	{
		random = rand() % 6 + 10;
	}
	colorArr[1] = random;

	random = rand() % 6 + 10;
	while (ColorArrContainsThisColor(colorArr, random))
	{
		random = rand() % 6 + 10;
	}
	colorArr[2] = random;

	random = rand() % 6 + 10;
	while (ColorArrContainsThisColor(colorArr, random))
	{
		random = rand() % 6 + 10;
	}
	colorArr[3] = random;

	random = rand() % 6 + 10;
	while (ColorArrContainsThisColor(colorArr, random))
	{
		random = rand() % 6 + 10;
	}
	colorArr[4] = random;

	random = rand() % 6 + 10;
	while (ColorArrContainsThisColor(colorArr, random))
	{
		random = rand() % 6 + 10;
	}
	colorArr[5] = random;

	if (hours == 0 && minutes < 15)
	{
		for (int i = 0; i < 6; i++)
		{
			colorArr[i] = 14;
		}
	}

	if (hours == 0 && minutes < 1)
	{
		for (int i = 0; i < 6; i++)
		{
			colorArr[i] = 12;
		}
	}

	if (hours == 0 && minutes == 0 && seconds < 10 && flag)
	{
		for (int i = 0; i < 6; i++)
		{
			colorArr[i] = 0;
		}
	}

	for (int i = 1; i <= 11; i++)
	{
		std::cout << " ";
		SetConsoleTextAttribute(handle, colorArr[0]);
		switch (hours1)
		{
		case 0:
			PrintZero(i);
			break;
		case 1:
			PrintOne(i);
			break;
		case 2:
			PrintTwo(i);
			break;
		case 3:
			PrintThree(i);
			break;
		case 4:
			PrintFour(i);
			break;
		case 5:
			PrintFive(i);
			break;
		case 6:
			PrintSix(i);
			break;
		case 7:
			PrintSeven(i);
			break;
		case 8:
			PrintEight(i);
			break;
		case 9:
			PrintNine(i);
			break;
		}

		SetConsoleTextAttribute(handle, colorArr[1]);
		switch (hours2)
		{
		case 0:
			PrintZero(i);
			break;
		case 1:
			PrintOne(i);
			break;
		case 2:
			PrintTwo(i);
			break;
		case 3:
			PrintThree(i);
			break;
		case 4:
			PrintFour(i);
			break;
		case 5:
			PrintFive(i);
			break;
		case 6:
			PrintSix(i);
			break;
		case 7:
			PrintSeven(i);
			break;
		case 8:
			PrintEight(i);
			break;
		case 9:
			PrintNine(i);
			break;
		}

		if (i == 4 || i == 7)
		{
			SetConsoleTextAttribute(handle, 7);
			std::cout << (char)219 << "   ";
		}
		else
		{
			std::cout << "    ";
		}

		SetConsoleTextAttribute(handle, colorArr[2]);
		switch (minutes1)
		{
		case 0:
			PrintZero(i);
			break;
		case 1:
			PrintOne(i);
			break;
		case 2:
			PrintTwo(i);
			break;
		case 3:
			PrintThree(i);
			break;
		case 4:
			PrintFour(i);
			break;
		case 5:
			PrintFive(i);
			break;
		case 6:
			PrintSix(i);
			break;
		case 7:
			PrintSeven(i);
			break;
		case 8:
			PrintEight(i);
			break;
		case 9:
			PrintNine(i);
			break;
		}

		SetConsoleTextAttribute(handle, colorArr[3]);
		switch (minutes2)
		{
		case 0:
			PrintZero(i);
			break;
		case 1:
			PrintOne(i);
			break;
		case 2:
			PrintTwo(i);
			break;
		case 3:
			PrintThree(i);
			break;
		case 4:
			PrintFour(i);
			break;
		case 5:
			PrintFive(i);
			break;
		case 6:
			PrintSix(i);
			break;
		case 7:
			PrintSeven(i);
			break;
		case 8:
			PrintEight(i);
			break;
		case 9:
			PrintNine(i);
			break;
		}

		if (i == 4 || i == 7)
		{
			SetConsoleTextAttribute(handle, 7);
			std::cout << (char)219 << "   ";
		}
		else
		{
			std::cout << "    ";
		}

		SetConsoleTextAttribute(handle, colorArr[4]);
		switch (seconds1)
		{
		case 0:
			PrintZero(i);
			break;
		case 1:
			PrintOne(i);
			break;
		case 2:
			PrintTwo(i);
			break;
		case 3:
			PrintThree(i);
			break;
		case 4:
			PrintFour(i);
			break;
		case 5:
			PrintFive(i);
			break;
		case 6:
			PrintSix(i);
			break;
		case 7:
			PrintSeven(i);
			break;
		case 8:
			PrintEight(i);
			break;
		case 9:
			PrintNine(i);
			break;
		}

		SetConsoleTextAttribute(handle, colorArr[5]);
		switch (seconds2)
		{
		case 0:
			PrintZero(i);
			break;
		case 1:
			PrintOne(i);
			break;
		case 2:
			PrintTwo(i);
			break;
		case 3:
			PrintThree(i);
			break;
		case 4:
			PrintFour(i);
			break;
		case 5:
			PrintFive(i);
			break;
		case 6:
			PrintSix(i);
			break;
		case 7:
			PrintSeven(i);
			break;
		case 8:
			PrintEight(i);
			break;
		case 9:
			PrintNine(i);
			break;
		}

		std::cout << " " << std::endl;
	}
}

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

	std::cout << "-------------------------------------------------------------------------------------" << std::endl;
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
			}
		}
		else
		{
			ShowTimer(hours, minutes, seconds, false);
			SetConsoleTextAttribute(handle, 7);
			std::cout << "-------------------------------------------------------------------------------------" << std::endl;
			Sleep(1000);
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

	ShowTimer(hours, minutes, seconds, false);
	SetConsoleTextAttribute(handle, 7);
	std::cout << "-------------------------------------------------------------------------------------" << std::endl;
	bool played = PlaySound(TEXT("Bomb.wav"), NULL, SND_SYNC);

	return 0;
}
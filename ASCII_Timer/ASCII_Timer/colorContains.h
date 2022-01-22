#pragma once

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
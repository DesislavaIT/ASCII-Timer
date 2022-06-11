#pragma once
#include "ColorContains.h"

bool ColorArrContainsThisColor(const int arr[6], int color) const
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


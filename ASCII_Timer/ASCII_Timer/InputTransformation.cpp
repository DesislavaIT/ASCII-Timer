#pragma once
#include "InputTransforamtion.h"

int TurnIntoSeconds(unsigned long number) const
{
    int result = number % 60;
    return result;
}

int TurnIntoMinutes(unsigned long number) const
{
    int result = number % 60;
    return result;
}


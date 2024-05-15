#include "token.h"


Token::Token()
{
    ended = false;
    insideSafeHouse = false;
    iterator = 0;
    position = -1;
    free = false;
    stacked = false;
}

bool Token::getFree()
{
    return free;
}

bool Token::getStacked()
{
    return stacked;
}

int Token::getPosition()
{
    return position;
}

void Token::setPosition(int x)
{
    position = x;
}

void Token::setFree(bool val)
{
    free = val;
}




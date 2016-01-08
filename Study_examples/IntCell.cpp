/* 
 * File:   IntCell.cpp
 * Author: mcf8379
 * 
 * Created on June 12, 2015, 8:28 AM
 */

#include "IntCell.h"

IntCell::IntCell(int initialValue): storedValue(initialValue)
{
}

int IntCell::read() const
{
    return storedValue;
}

void IntCell::write(int x)
{
    storedValue = x;
}
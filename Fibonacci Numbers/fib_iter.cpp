#include<bits/stdc++.h> // all standard library's included
#include "Header.h"

using namespace std;

int iteration(int num[], int size)
{
    if(size == 0 || size == 1) // base case
    {
        return size;
    }
    else
    {
    double tempNum = 0;
    double total = 0;
    double firstNumber = 1;
    for(int i = 1; i < size; i++)
    {
        total = tempNum + firstNumber;
        tempNum = firstNumber;
        firstNumber = total;
    }
    return firstNumber;
    }
}

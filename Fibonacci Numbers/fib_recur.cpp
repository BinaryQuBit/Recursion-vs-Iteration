#include<bits/stdc++.h> // all standard library's included
#include "Header.h"

using namespace std;

int recursion(int num){
    if( num == 0 || num == 1) /* base case */
    return num;
    else
    return recursion(num - 1) + recursion(num - 2);
    }


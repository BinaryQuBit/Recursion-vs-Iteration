// This Program is built to measure the speed of recursion and iteration methods using Fibonacci Number
#include<bits/stdc++.h> // all standard library's included
#include "Header.h" // Header file

using namespace std;

int main()
{
    char ch; // created character variable
    cout << "Welcome to Fibonacci Number with base 0 calculator. Please follow the steps!" << endl; // prompting user
    do{ // a loop for either iterative or recurion
    cout << "Enter R for Recursion and I for Iteration: "; // prompting user to enter R or I
    cin >> ch; // storing

    int num;
    if(ch == 'R' || ch == 'r') // for recursion
    {
        cout << "Enter an integer number: ";
        cin >> num;
        clock_t begin = clock(); // clock time run start
        cout << "The Fibonacci Number of " << num << " is: " << recursion(num) << endl;
        clock_t end = clock(); // clock time end time
        double time_spent = (double)(end - begin) / CLOCKS_PER_SEC; // to convert time from seconds to millisecconds
        cout << "Time spent: " << time_spent << endl;
        break;
    }
    else if(ch == 'I' || ch == 'i') // for iteration
    {
        int size;
        cout << "Enter an integer number: ";
        cin >> size;
        int num[size];
        for(int i = 0; i < size; i++)
        {
            num[i] = i;
        }
        clock_t begin = clock(); // clock time begin
        cout << "The Fibonacci Number of " << size << " is: " << iteration(num, size) << endl;
        clock_t end = clock(); // clock time ended
        double time_spent = (double)(end - begin) / CLOCKS_PER_SEC; // conversion
        cout << "Time spent: " << time_spent << endl;;
        break;
    }
    else
        cout << "Invalid Entry. Please Try Again" << endl;
    } while (ch != 'R' || ch != 'r' || ch != 'I' || ch != 'i');
}

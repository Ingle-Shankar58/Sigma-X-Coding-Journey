// Question 5: Fibonacci Series

// For a positive integer N, write a program to print the first N Fibonacci numbers.

// Assumption: N >= 2

// Fibonacci Series:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

// In the Fibonacci series, each number is the sum of the previous two numbers.

// Examples:

// 1 = 0 + 1
// 2 = 1 + 1
// 3 = 1 + 2
// 5 = 2 + 3
// 8 = 3 + 5

// Example Input:

// Enter N: 10

// Example Output:

// 0 1 1 2 3 5 8 13 21 34

#include <iostream>

using namespace std;

int main()
{

    int no;

    cout << "Enter Number : " << endl;
    cin >> no;

    int first = 0;

    int sec = 1;

    for (int i = 1; i <= no; i++)
    {

        cout << first << endl;

        first = first + sec;
        sec = first - sec;
    }

    return 0;
}
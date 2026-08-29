// Question 5: Armstrong Number

// Write a program to check whether a 3-digit number is an Armstrong Number or not.

// An Armstrong Number is a number that is equal to the sum of the cubes of its digits.

// Example:

// 371 is an Armstrong Number because:

// 3³ + 7³ + 1³ = 27 + 343 + 1 = 371

// Input: A 3-digit number
// Output: Print whether the number is an Armstrong Number or Not an Armstrong Number.

#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Enter any 3 Digit Nuber : " << endl;
    cin >> num;

    int num02 = num;

    int firstdigit = num % 10;
    num = num / 10;
    int secontDigit = num % 10;
    num = num / 10;

    int amst = firstdigit * firstdigit * firstdigit + secontDigit * secontDigit * secontDigit + num * num * num;

    if (num02 == amst)
    {
        cout << "is an Armstrong Number : " << num02 << endl;
    }
    else
    {
        cout << "Not an Armstrong Number !!" << endl;
    }
}
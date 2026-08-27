#include <iostream>

using namespace std;

int main()
{

    // Arithmatic Operators
    //  01 Binary Operators

    int a = 5;
    int b = 3;

    cout << "+ " << (a + b) << endl; // 8
    cout << "- " << (a - b) << endl; // 2
    cout << "* " << (a * b) << endl; // 15
    cout << "/ " << (a / b) << endl; // 1
    cout << "% " << (a % b) << endl; // 2

    // Arithmatic Operators
    //  Unary

    int c = 4;

    cout << "The Value Of C :" << c << endl;

    c++;

    cout << "The Value Of C After using Increment  :" << c << endl;

    c--;

    cout << "The Value Of C After using Decrement   :" << c << endl;

    // Assignment Operator

    int a = 5; // Assign a 5 To Variable a

    cout << a << endl;

    a += 5; // Add and Assign a 5 to 'A' Varibale

    cout << a << endl;

    cout << a << endl; // Substract and Assign Value to Variable

    cout << a << endl;

    a *= 5; // multiply and assign

    cout << a << endl;

    a /= 5; // Devide then Assign

    cout << a << endl;

    // Relational Operators
    // Relational operatorn return a boolean result 'true'-->0 and 'false'--1
    int a = 3;
    int b = 5;

    cout << (a > b) << endl; // False ---> 0

    cout << (a < b) << endl; // True ---> 1

    int a = 3;
    int b = 3;

    cout << (a >= b) << endl; // True ---> 1

    cout << (a <= b) << endl; // True ---> 1

    cout << (a == b) << endl; // True ---> 1

    cout << (a != b) << endl; // False ---> 0

    // Logical Operators
    cout << ((3 < 5) && (5 > 3)) << endl; // return a "True" result both expression are true
    cout << ((3 < 5) && (5 < 3)) << endl; // return "False" if one expression is false



     cout << ((3 < 5) || (5 < 3)) << endl; // return a "True" result One expression are True
     cout << ((3 > 5) || (5 < 3)) << endl; // return a "False" result Both expression are False


    return 0;
}
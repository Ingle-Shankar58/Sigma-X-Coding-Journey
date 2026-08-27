#include <iostream>

using namespace std;

int main()
{

    int a, b; //  varible for for assigning value and oerform operation

    char ch; // varible for operator

    cout << "Enter First Value : " << endl;
    cin >> a;

    cout << "Enter Operator ('+','-','*','/') Like : " << endl;
    cin >> ch;

    cout << "Enter Second Value: " << endl;
    cin >> b;

    if (ch == '+')
    {

        cout << "Addition is: " << (a + b) << endl;
    }
    else if (ch == '-')
    {

        cout << "Substraction is: " << (a - b) << endl;
    }
    else if (ch == '*')
    {

        cout << "Multply is: " << (a * b) << endl;
    }
    else if (ch == '/')
    {
        cout << "Divid is: " << (a / b) << endl;
    }
    else
    {

        cout << "Invalid Operator " << endl;
    }

    //  Using Switch Case Same Operation Performing

    switch (ch)
    {
    case '+':
        cout << "Addition is: " << (a + b) << endl;
        break;
    case '-':
        cout << "Substraction is: " << (a - b) << endl;
        break;
    case '*':
        cout << "Multply is: " << (a * b) << endl;
        break;
    case '/':
        cout << "Divid is: " << (a / b) << endl;
        break;
    default:
        cout << "Invalid Operator " << endl;
        break;
    }
}

//Question: 
            //Write a C++ program to get a number from the user and print whether it's positive, negative, or zero.

#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter Number:" << endl;
    cin >> num;

    if (num > 0)
    {
        cout << "Positive !!" << endl;
    }
    else if (num < 0)
    {
        cout << "Negative !!" << endl;
    }
    else
    {
        cout << "Zero !!" << endl;
    }
}

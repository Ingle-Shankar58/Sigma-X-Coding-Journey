#include <iostream>

using namespace std;

int main()
{

    double income;

    cout << "Enter Income :" << endl;
    cin >> income;

    if (income <= 500000)
    {

        cout << "Tax Is : 0 %" << endl;
    }
    else if (income <= 1000000)
    {

        cout << "Tax Is 20 % : " << ((income * 20) / 100) << endl;
    }
    else 
    {

        cout << "Tax is : 30 % : " << ((income * 30) / 100) << endl;
    }
}
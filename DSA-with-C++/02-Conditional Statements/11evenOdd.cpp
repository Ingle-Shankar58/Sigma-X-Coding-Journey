#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Enter Number :" << endl;
    cin >> num;

    if (num % 2 == 0)
    {

        cout << "Even No :" << num << endl;
    }
    else
    {
        cout << "Odd No " << num << endl;
    }
}
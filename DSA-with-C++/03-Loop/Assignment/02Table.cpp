// WAP to print the multiplication table of a number entered by the user. ...

#include <iostream>

using namespace std;

int main()
{

    int no;
    cout << "Enter Number :  " << endl;
    cin >> no;

    for (int i = 1; i <= 10; i++)
    {

        int table = no * i;

        cout << no << " * " << i << " = " << table << endl;
    }

    return 0;
}

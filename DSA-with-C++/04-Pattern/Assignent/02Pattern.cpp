#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    for (int i = 1; i <= 5; i++)
    {

        for(int Q = 1; Q<=n-i;Q++){

            cout<<"  ";

        }

        for (int k = 1; k <= 5; k++)
        {

            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

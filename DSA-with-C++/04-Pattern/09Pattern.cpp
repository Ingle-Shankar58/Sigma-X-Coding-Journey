#include <iostream>

using namespace std;

int main()
{
    int n = 7;

    for (int i = 0; i <= n; i++)
    {

        for (int k = n - i; k >= 1; k--)
        {
            if (i % 2 != 0)
            {
                cout << " ";
            }
        }

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << "* ";
            }
        }
        if (i % 2 != 0)
        {
            cout << endl;
        }
    }

    for (int i = n; i >= 1; i--)
    {

         for (int k = n - i; k >= 1; k--)
        {
            if (i % 2 != 0)
            {
                cout << " ";
            }
        }

        for (int k = 1; k <= i; k++)
        {
            if (i % 2 != 0)
            {
                cout << "* ";
            }
        }

        if (i % 2 != 0)
        {
            cout << endl;
        }
    }

    return 0;
}
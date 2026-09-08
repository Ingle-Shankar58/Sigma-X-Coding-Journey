// Question 4:

// For a positive N, WAP that prints all the prime numbers from 2 to N.

// Assumption: N >= 2

#include <iostream>

using namespace std;

int main()
{

    int no;
    cout << "Enter No : " << endl;
    cin >> no;

    if (no >= 2)
    {

        for (int i = 2; i <= no; i++)
        {

            bool isPrime = true;

            for (int j = 2; j < i; j++)
            {

                if (i % j == 0)
                {
                    isPrime = false;
                }
            }

            if (isPrime)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}

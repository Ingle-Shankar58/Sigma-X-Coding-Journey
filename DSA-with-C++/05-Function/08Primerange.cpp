#include <iostream>

using namespace std;

bool prime(int n)
{

    bool isPrime = true;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {

            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {

        return true;
    }
    else
    {

        return false;
    }
}

void allPrime(int n)
{

    for (int i = 2; i <= n; i++)
    {

        bool isPrime = prime(i);

        if (isPrime)
        {

            cout << "Prime !!! : " << i << endl;
        }
    }
}

int main()
{

    allPrime(100);

    return 0;
}

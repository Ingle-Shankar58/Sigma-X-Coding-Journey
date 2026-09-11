#include <iostream>

using namespace std;

bool primeNo(int n)
{

    bool isPrime = true;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            isPrime = false;
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

int main()
{

    bool res = primeNo(4);

    if (res)
    {

        cout << "Prime  !!";
    }
    else
    {
        cout << "Not Prime  !!";
    }

    return 0;
}
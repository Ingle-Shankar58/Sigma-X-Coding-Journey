// Reverse The Digits like 143 to----> 341

#include <iostream>

using namespace std;

int main()
{

    int num = 10829;

    int rev = 0;

    while (num > 0)
    {
        int n = num % 10;

        rev = (rev * 10) + n;

       num = num / 10;
    }

    cout << "Reverse Number : " << rev << endl;

    return 0;
}

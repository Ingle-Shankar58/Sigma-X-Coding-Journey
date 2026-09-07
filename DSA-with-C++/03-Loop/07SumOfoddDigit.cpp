// Sum of ODD Digit of a Number

#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << " Enter Number : " << endl;
    cin >> num;

    int sum = 0;

    while (num > 0)
    {

        int n = num % 10;

        if (n % 2 != 0)
        {
            sum += n;
        }

        num = num / 10;
    }

    cout << "Sum of Odd Digit's : " << sum << endl;
}
// Print The sum of N Natural Number

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter Number : " << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {

        sum += i;
    }

    cout << "Sum of N Natural Number is : " << sum << endl;

    return 0;
}

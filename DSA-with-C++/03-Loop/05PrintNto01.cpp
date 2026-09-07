// Print N to 01 Numbers reverse like 10,9,8,7,6...

#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter Number : " << endl;
    cin >> num;

    for (int i = num; i >= 1; i--)
    {

        cout << i <<" ";
    }
}
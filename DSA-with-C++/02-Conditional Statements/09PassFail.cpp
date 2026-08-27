#include <iostream>

using namespace std;

int main()
{

    float marks;

    cout << "Enter Yoyr Marks:" << endl;
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
         cout << "Invalid Marks!" << endl;
    }
    else if (marks > 90)
    {
        cout << " Pass With 'A Disting' Grade " << endl;
    }
    else if (marks > 80)
    {

        cout << " Pass With 'A+' Grade " << endl;
    }
    else if (marks > 70)
    {

        cout << " Pass With 'A' Grade " << endl;
    }
    else if (marks >= 35)
    {

        cout << "Pass " << endl;
    }
    else
    {

        cout << " Fail !!!" << endl;
    }

    return 0;
}

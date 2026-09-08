// WAP to input a number and check whether the number is an Armstrong number or not.

// Definition:
// An Armstrong number is a number that is equal to the sum of the cubes of its digits.

// Example:
// 153 = 1³ + 5³ + 3³ = 153

#include <iostream>

using namespace std;

int main()
{

    int no;

    cout << "Enter Number : " << endl;
    cin >> no;

    int no1 = no;

    int sum =0;

    while (no1 > 0)
    {

        int n = no1 % 10;
        sum  = sum + n * n * n;
        no1 = no1 / 10;
    }

    if(no == sum){

        cout<<"Amstring No : "<<no <<endl;
    }else{
        cout<<" Not Amstring No : "<<no <<endl;
    }

    return 0;
}

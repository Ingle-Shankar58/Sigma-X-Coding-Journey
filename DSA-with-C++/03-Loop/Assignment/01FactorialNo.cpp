
//WAP to find the Factorial of a number entered by the user .....

#include <iostream>

using namespace std;

int main()
{

    int no;
    cout<<"Enter Number :" <<endl;
    cin>>no;

    int  fact = 1;;

    for(int i = 1 ; i <=no ; i++){

       fact = fact * i;

    }

    cout<<"Factorisl of Number is : " <<fact <<endl;

    return 0;
}
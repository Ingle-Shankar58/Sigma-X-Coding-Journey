// Sum of Digits

#include <iostream>
using namespace std;

int main()
{

    int num ;

    cout<<"Enter Number :" <<endl;
    cin>>num;
    int sum = 0;

   while(num>0){

    int n = num %10;
    sum += n;
    num = num /10;

   }

   cout<<"Sum of Digit is :" <<sum <<endl;
}
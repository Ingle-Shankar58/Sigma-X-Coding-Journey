// Check If a Number is Prime orr Not

#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    int num;

    cout << "Enter Number: " << endl;
    cin >> num;

    bool isPrime = true;

    if(num ==2){
          cout<<"Prime : "<<num <<endl;
          return 0;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
            if(num % i == 0){
                isPrime =  false;
                break;
            }
    }

    if(isPrime){

        cout<<"Prime : "<<num <<endl;
    }else{
        cout<< "Not Prime !! "<<endl;
    }

    return 0;
}
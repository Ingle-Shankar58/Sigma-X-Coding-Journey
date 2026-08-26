#include<iostream>
 using namespace std;

 int main(){

    int num ;

    cout<<"enter a Nummber :";
    cin>>num;

    bool isPrime = true;

    for(int i = 2 ;i <num ;i++){

        if(num % i == 0){

            isPrime = false;

        }
    }

    if(isPrime){

        cout<<num<<" This Number is a Prime Nummber "<<endl;
    }else{
        cout<<num<<" This is not a  prime number"<<endl;
    }

    return 0;

 }
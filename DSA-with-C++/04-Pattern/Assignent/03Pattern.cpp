#include<iostream>

using namespace std ;


int main(){

    int n =5;

    for(int i =1 ;i<=n ;i++){


        for(int k = n-1 ;k >=i;k--){

            cout<<" ";
        }

        for(int j = i; j>=1;j--){

            cout<<j;
        }

        for(int l = 2 ; l<=i;l++){

            cout<<l;
        }
        cout<<endl;
    }


    return 0;
}
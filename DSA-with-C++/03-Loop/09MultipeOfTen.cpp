#include <iostream>

using namespace std ;

int main(){

    int n ;

    do
    {

        cout<<"Enter No:";
        cin>>n;

        if(n %10 ==0){
            break;
        }

        cout<<"you Enter :"<<n <<endl;
       
    } while (true);
    



    return 0;
}





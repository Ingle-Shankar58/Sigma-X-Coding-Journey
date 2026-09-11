#include<iostream>

using namespace std;


string oddeven(int n ){


    if(n % 2==0){

        return "even";
    }else{

        return "Odd";

    }
}

int main()
{

    for(int i = 1 ;i <=10 ;i++){

        cout<<oddeven(i)<<" "<<i<<endl;
    }
  
    return 0;
}

#include <iostream>

using namespace std;

int sum(int a, int b)
{

    return a + b;
}

int sum(int a, int b, int c)
{

    return a + b + c;
}

int main()
{

    cout<<sum(20,10)<<endl;
     cout<<sum(20,10,50)<<endl;


    return 0;
}

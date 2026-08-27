#include <iostream>

using namespace std;

int main()
{

    int age;

    cout << "Enter Age :" << endl;
    cin >> age;

    if (age >= 18)
    {

        cout << "You Can Vote !!" << endl;
    }
    else
    {

        cout << "Cannot Vote !!" << endl;
    }

    if(age>= 35){

        cout<< "Contest For Election !!!" <<endl;
    }
}
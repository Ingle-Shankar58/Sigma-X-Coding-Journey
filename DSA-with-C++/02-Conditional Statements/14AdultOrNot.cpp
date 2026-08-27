#include <iostream>

using namespace std;

int main()
{

    bool isAdult; // 0  / 1 According to  User Input 
    int age;

    cout << "Enter Age: " << endl;
    cin >> age;

    isAdult = (age < 18) ? true : false; // Short cut way of If else Statement 

    cout << isAdult << endl;


    // Grater Among Two Number 

    string res;

    int a =  10 ;
    int b =  20;

    res = (a>=b)?"A Is Grater " : " B Is Grater ";

    cout<<res <<endl;



    return 0;
}
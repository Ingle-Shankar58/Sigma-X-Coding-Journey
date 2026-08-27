// Question 03 : Build a Simple Interest Calculator.
// Input : principal (p) , rate (r) , time (t)
// outPut :(p*r*t) / 100

#include <iostream>

using namespace std;

int main()
{

  int principal, rate, time;

  cout << "Enter principal :" << endl;
  cin >> principal;

  cout << "Enter Rate :" << endl;
  cin >> rate;

  cout << "Enter Time :" << endl;
  cin >> time;

  double si = (principal * rate * time) / 100.0;

  cout << "Simple Interest is :" << si << endl;
}
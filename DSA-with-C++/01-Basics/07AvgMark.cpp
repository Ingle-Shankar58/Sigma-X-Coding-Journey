#include <iostream>

using namespace std;

int main()
{

    int m1, m2, m3, m4, m5;

    cout << "Enter Your Marks Continiously 5 Subjects:";
    cin >> m1;
    cin >> m2;
    cin >> m3;
    cin >> m4;
    cin >> m5;

    double avg = (m1 + m2 + m3 + m4 + m5) / 5;

    cout << "This Average of Marks is in Persentile :" << avg;
}
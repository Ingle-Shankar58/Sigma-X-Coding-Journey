#include <iostream>

using namespace std;

int main()
{

    int a, b, c;

    cout << "Enter A:" << endl;
    cin >> a;

    cout << "Enter b:" << endl;
    cin >> b;

    cout << "Enter C:" << endl;
    cin >> c;

    if (a >= b && a >= c)
    {

        cout << "A Is Grater !!" << endl;
    }
    else if (b >= a && b >= c)
    {

        cout << "B Is Grater !!" << endl;
    }
    else
    {

        cout << "C is Grater !!" << endl;
    }

    return 0;
}

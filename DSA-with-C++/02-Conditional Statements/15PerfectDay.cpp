#include <iostream>
using namespace std;

int main()
{

    int day;

    cout << "Enter Day In Week In Integer Format Like 1,2,3 :" << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday !!" << endl;
        break;
    case 2:
        cout << "Tuesday !!" << endl;
        break;
    case 3:
        cout << "Thirsday !!" << endl;
        break;
    case 4:
        cout << "Wensday !!" << endl;
        break;
    case 5:
        cout << "Friday !!" << endl;
        break;
    case 6:
        cout << "Saturday !!" << endl;
        break;
    case 7:
        cout << "Sunday !!" << endl;
        break;

    default:

        cout << "Invalid Number !!" << endl;
        break;
    }

    return 0;
}
// Question 02:Enter cost of 3 items from the user (using float data type) - a pencil,a pen and an eraser.You have to output the total cost of the items back to the user as their bill.

// (Addon : You can also try adding 18% GST tax to the items in the bill as anadvanced problem)

#include <iostream>

using namespace std;

int main()
{

    double pencil, pen, eraser;

    cout << "Enter Price of pencil :" << endl;
    cin >> pencil;

    cout << "Enter Price of Pen :" << endl;
    cin >> pen;

    cout << "Enter Price of eraser :" << endl;
    cin >> eraser;

    double price  =pencil+pen+eraser;

    double gst = price * 18 / 100;

    double bill  = price + gst ;

    cout<<"Price is : "<<price<<" Gst is : "<<gst<<" Final Bill Is : "<<bill<<endl;


}
#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        if (i % 2 != 0)
        {

            for (int k = 1; k <= i; k++)
            {
                if (k % 2 != 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
          
        }
        else
        {

            for (int k = 1; k <= i; k++)
            {

                if (k % 2 != 0)
                {
                    cout << "0 ";
                }
                else
                {
                    cout << "1 ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
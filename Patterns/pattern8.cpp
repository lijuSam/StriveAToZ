#include <iostream>
using namespace std;

/*
   * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *


 here also we are printing space start and space

 for space we can observe that space is like
  0 -> 0  ( 0 row 0 space)
  1 -> 1  ( 1 row 1 space)
  2 -> 2  (2 row 2 space)

 for star we need to use formular 2*n - 2*i + 1
 0 - > 9 ( 2* 5 - 2 * 0 ) -1 = 9
 1 - > 7  (2*5 - 2 * 1) - 1 = 7
 2 -> 5   (2*5 -  2 * 2) - 1 = 5

*/

void pattern8(int n)
{

    for (int i = 0; i <n; i++)
    {
        // space

        for (int j = 0; j<i; j++)
        {

            cout << " ";
        }

        // star

        for (int j = 0; j<2*n - (2*i+1); j++)
        {

            cout << "*";
        }

        // space

        for (int j = 0; j<i; j++)
        {

            cout << " ";
        }

        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    pattern8(n);

    return 0;
}
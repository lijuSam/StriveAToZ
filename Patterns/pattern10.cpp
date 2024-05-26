#include <iostream>
using namespace std;

/*
      *
    * * *
  * * * * *
 * * * * * * *
 * * * * * *  *
   * * * * *
     * * *
       *

*/

void printPatternUpper(int n)
{

    for (int i = 0; i < n; i++)
    {

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPatternLower(int n)
{
     for (int i = 0; i < n; i++)
    {

        // space
        for (int j = 0; j <i ; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j <  2*n - (2 *i + 1); j++)
        {
            cout << "*";
        }

        // space

        for (int j = 0; j <i; j++)
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

    printPatternUpper(n);
    printPatternLower(n);

    return 0;
}
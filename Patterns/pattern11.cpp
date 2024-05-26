#include <iostream>
using namespace std;

/*
  *
  * *
  * * *
  * * * *
  * * * * *
  * * * *
  * * *
  * *
  *


*/

void printPattern11(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int stars = i;

        if (i > n)
        {
            stars = 2 * n - i;
        }

        for (int i = 1; i < stars; i++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    printPattern11(n);
}
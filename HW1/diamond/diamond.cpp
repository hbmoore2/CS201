//
//diamond.cpp
//Harrison Moore
//CS201
//Feb 3, 2020
//
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    int  i, j, k, space, n;
    cout << "Enter a positive integer: ";
    cin >> n;
    space = n - 1;
        cout << endl;

        //upper diamond
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= space; j++)
                cout << " ";    //printing spaces
            space--;
            for (k = 1; k <= 2 * i - 1; k++)
                cout << "#";
            cout << endl;
        }
        //lower diamond
        space = 1;
        for (i = 1; i <= n - 1; i++)
        {
            for (j = 1; j <= space; j++)
                cout << " ";
            space++;
            for (k = 1; k <= 2 * (n - i) - 1; k++)
                cout << "#";
            cout << endl;
        }
        return 0;
    }
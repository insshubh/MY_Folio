#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the row no" << endl;
    cin >> n;

    /*
    for(int i=1;i<=n;i++)
    {
      // for spaces i.e total row no - current row.
      for(int j=1;j<=n-i;j++)
      {
        cout<<" ";

      }
      // for pattern
      for(int j=1;j<=2*i-1;j++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
*/

    /*
        for hollow triangle
        for(int row=1;row<=n;row++)
        {
            // for outside space
            for(int col=1;col<=n-row;col++)
                cout<<" ";

            // for Print *
            for(int col=1;col<=row;col++)
            {
               cout<<"* ";
            }
            cout<<endl;
        }
          */

    // ULta Triangle
    
    // *************
    //  ***********
    //   *********
    //    *******
    //     *****
    //      ***
    //       *

    /*(for(int i=1;i<=n;i++)
    {
      // for spaces i.e total row no - current row.
      for(int j=1;j<=i-1;j++)
      {
        cout<<" ";
      }
      // for pattern

      for(int j=1;j<=2*n-2*i+1;j++)
      {
        cout<<"*";
      }
      cout<<endl;
    }*/

           // Butterfly pattern

    //        *            *
    //        **          **
    //        ***        ***
    //        ****      ****
    //        *****    *****
    //        ******  ******
    //        **************
    //        ******  ******
    //        *****    *****
    //        ****      ****
    //        ***        ***
    //        **          **
    //        *            *

    for (int i = 1; i <= n; i++)
    {
        // for print *
        for (int col = 1; col <= i; col++)
            cout << "*";

        // for space
        for (int col = 1; col <= 2 * n - 2 * i; col++)
        {
            cout << " ";
        }

        // for print *
        for (int col = 1; col <= i; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        // for print *
        for (int j = 1; j <= n - i; j++)
            cout << "*";

        // for spaces
        for (int j = 1; j <= 2 * i; j++)
            cout << " ";

        // for print *

        for (int j = 1; j <= n - i; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}
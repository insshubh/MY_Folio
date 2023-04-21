#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the input" << endl;
    cin >> num;
    int i, j;
    // for( i=1;i<num;i++)
    // {
    //     for( j=1;j<=i;j++)
    //     {
    //         if((i+j)%2==0)
    //         {
    //             cout<<"1"<<" ";
    //         }
    //         else
    //         {
    //             cout<<"0"<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j < i; j++)
        {
           if(j%2==0)
           {
            cout<<"1";
           }
           else{
            cout<<"0";
           }
            
            
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int inp;
    cout<<"Enter the input"<<endl;
    cin>>inp;
    for(int i=0;i<=inp;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;

        }
        cout<<endl;
        
    }
    return 0;
}
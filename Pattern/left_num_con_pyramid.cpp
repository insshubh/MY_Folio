#include<iostream>
using namespace std;

int main()
{
    int inp;
    cout<<"Enter the input"<<endl;
    cin>>inp;
    int count=1;

    for(int i=0;i<inp;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
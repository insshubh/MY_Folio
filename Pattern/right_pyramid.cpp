#include<iostream>
using namespace std;

int main()
{
    int inp;
    cout<<"Enter the input"<<endl;
    cin>>inp;
    for(int i=1;i<=inp;i++)
    {
        //inner loop one for Spces and one for star;
        for(int j=1;j<=inp-i;j++)
        {
            cout<<" ";
           
        }
         for(int j=1;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
      
        
    }
    return 0;
}
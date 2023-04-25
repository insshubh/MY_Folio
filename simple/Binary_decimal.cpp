#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the binary number"<<endl;
    cin>>n;
    int sum=0;
    int count =1;
    while(n!=0)
    {
        int ld=(n%10);
        sum=sum+ld*count;
        count*=2;
        n=n/10;
        
    }
    cout<<"The decimal no is :"<<sum;

    
    
    return 0;
}
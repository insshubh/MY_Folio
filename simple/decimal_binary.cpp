#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
     long long sum=0;
    int base=1;
    while(num)
    {
        int ld=num%2;
        sum+=ld*base;
        num=num/2;;
        base*=10;
    };
    cout<<sum;
    return 0;
}
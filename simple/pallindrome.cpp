#include<iostream>
using namespace std;
int pallindrome_chk(int num)
{
    int temp=num;
    int res=0;
    while(temp>0)
    {
        int ld=temp%10;
        res=res*10+ld;
        temp=temp/10;
    }
    return(num==res);
}
int main()
{
    cout<<pallindrome_chk(1431);
    return 0;
}
#include<iostream>
using namespace std;
int digit_count(int num)
{
    int tot=0;
    while (num>0)
    {
        num=num/10;
        tot++;
    }
    return tot;
}
int main()
{
    cout<<digit_count(345);
    
    return 0;
}
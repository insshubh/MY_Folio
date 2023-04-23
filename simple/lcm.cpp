#include<bits/stdc++.h>
using namespace std;
// Efficient approach
int gcd_eopt(int a,int b) {
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd_eopt(b,a%b);
    }
}
int lcm(int a,int b)
{
    int res=(a*b)/gcd_eopt(a,b);
    return res;
}
int main()
{
    //cout<<lcm(4,6);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// eucclidean GCD                 x%y if x is smaller than y then its value is y;
/*int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}*/

// optimized approach
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
int main()
{
    // NAIVE APPROACH
    /*int a,b;
    // input
    cout<<"Enter the both no "<<endl;
    cin>>a>>b;
    //finding minimum of two no
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    cout<<"The GCD of "<<a<<" & "<<b<<" is : "<<endl<< res;*/
   
   // euclidean solution
   //cout<<gcd(4,6);
   cout<<gcd_eopt(12,15);

    return 0;
}
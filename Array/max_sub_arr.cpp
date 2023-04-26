#include<bits/stdc++.h>
using namespace std;
// Naive approach takes n2 complexity.
int max_arr(int arr[], int si)
{
    int res=0;
    for(int i=0;i<si;i++)
    {
        int curr=0;
        for(int j=i;j<si;j++)
        {
            curr=curr+arr[j];
            res=max(res,curr);
        }
    }
    return res;
}
int main()
{
    int arr[5]={1,-2,3,-1,2};
    //cout<<max_arr(arr,5);
   
    
    return 0;
}
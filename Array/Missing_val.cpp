#include<bits/stdc++.h>
using namespace std;
// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

int main()
{
    int arr[7]={2, 3 ,4 ,1, 6, 7};
    int n =7;
    int sum= 7*(7+1)/2;
    int total = 0;
    for(int i=0;i<7;i++)
    {
         total = total + arr[i];
    }
    cout<<sum - total;
    
    return 0;
}
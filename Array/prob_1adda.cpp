#include <bits/stdc++.h>
using namespace std;
int duplicate(int arr[],int n)
{
   int ar[n]={0};
   
   for(int i=0;i<n;i++)
   {
      int index=arr[i];
      ar[index]++;
   }
   for(int i = 0;i<n;i++)
   {
      if(ar[i]>1)
      {
         cout<<i<<" ";
      }
      
   }
   

   
}
int main()
{
   int arr[3] = {1, 2, 3};
   duplicate(arr, 3);

   return 0;
}
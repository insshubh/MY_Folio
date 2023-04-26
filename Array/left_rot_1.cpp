#include<bits/stdc++.h>
using namespace std;
void l_oT(int arr[], int size) {
   int temp=arr[0];
   for(int i=1;i<size;i++) {
    arr[i-1]=arr[i];
   }
   arr[size-1] = temp;


}
void dispalay(int arr[], int si)
{
    for (int i = 0; i < si; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[4] ={1,34,65,7};
    l_oT(arr,4);
    dispalay(arr,4);
    
    return 0;
}
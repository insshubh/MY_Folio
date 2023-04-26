#include<bits/stdc++.h>
using namespace std;
void reverse_ar(int arr[],int size) {
    int low=0;
    int high=size-1;

    while(low<high) {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
void dispalay(int arr[],int si)
{
    for(int i=0;i<si;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6] ={1,5,2,8,9,33};
    dispalay(arr,6);
    reverse_ar(arr,6);
    cout<<endl;
    dispalay(arr,6);
       
    return 0;
}
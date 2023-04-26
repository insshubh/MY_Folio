#include<iostream>
using namespace std;
void insertion(int arr[],int si,int val,int pos)
{
    for(int i=si;i>=pos;i--) {
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    
}
void dispalay(int arr[],int si)
{
    for(int i=0;i<si;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void delete_fnc(int arr[],int size,int pos) {
    
    for(int i=pos;i<size;i++) {
       arr[i]=arr[i+1];
    }
    //int temp=arr[pos];

}
int main()
{
    int arr[5]={1,2,3,4};
    dispalay(arr,5);
    insertion(arr,5,5,2);
    cout<<endl;
    dispalay(arr,5);
    delete_fnc(arr,5,3);
    cout<<endl;
    dispalay(arr,5);    
    return 0;
}
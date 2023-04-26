#include<bits/stdc++.h>
using namespace std;
void arr_dpl_rmv(int arr[],int size ) {
    int res=1;
    for(int i=0;i<size;i++) {
        if(arr[i]!=arr[res-1]) {
            arr[res]=arr[i];
            res++;
            
        }
    }
}

// it takes temp array ..
void arr_fnc(int arr[],int size) {
    int temp[size];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<size;i++) {
        if(arr[i]!=temp[res-1]) {
            temp[res]=arr[i];
            res++;
        }
    }
    cout<<"Size =: "<<res<<endl;
    for(int i=0;i<res;i++) {
        arr[i]=temp[i];
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
    int arr[5]= {1,1,2,3,3};
    dispalay(arr,5);
    cout<<endl;
    //arr_dpl_rmv(arr,5);
    arr_fnc(arr,5);
    dispalay(arr,5);
    
    return 0;
}
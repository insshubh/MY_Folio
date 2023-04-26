#include<bits/stdc++.h>
using namespace std;
int getlar_ind(int arr[],int size) {
    int max=0;
    for(int i=1;i<size;i++) {
        if(arr[i]>arr[max]) {
            max=i;
        }
        
    }
       cout<<arr[max]<<endl;
    return max;
}
int secondlar_ind(int arr[],int size) {
    int sec=0;
    int max=0;
    for(int i=1;i<size;i++) {
        if(arr[i]>arr[max]) {
            max=i;
        }
        
    }
    for(int i=1;i<size;i++) {
        if(arr[i]>arr[sec] && arr[i] != arr[max]) {
            sec=i;
        }
    }
    cout<<arr[sec]<<endl;
    return sec;
}
int sec_effi_apporach(int arr[],int size)  {
    int res=-1;
    int max=0;
    for (int i = 1; i < size; i++)
    {
        if(arr[i]>arr[max]) {
            
            res=max;
            max=i;

        }
        else if(arr[i]!=arr[max]) 
        {
            if(res==-1 || arr[i]>arr[res]) 
            {
                res=i;
            }
        }
    }
    return res;
    
}
int main()
{
    int arr[5]={1,34,34,23,6};
    //cout<<getlar_ind(arr,5);
    //cout<<secondlar_ind(arr,5);
    cout<<sec_effi_apporach(arr,5);

    
    return 0;
}
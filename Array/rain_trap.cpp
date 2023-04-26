#include<bits/stdc++.h>
using namespace std;
int rain_prb(int arr[],int size) {

    int res=0;
    for(int i=1;i<size-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)
            lmax=max(lmax,arr[j]);
        int ramx=arr[i];
        for(int j=i+1;j<size;j++)
        
            ramx=max(ramx,arr[j]);
        
        res=res+min(lmax,ramx)-arr[i];
    }
    return res;
}


// Efficient approach here it takes n time..


int rain_trap(int arr[], int size) {
    int res=0;
    int lmax[size], rmax[size];
    lmax[0]=arr[0];
    for(int i=1;i<size;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);

    }
    rmax[size-1]=arr[size-1];
    for(int j=size-2;j>=0;j--)
    {
        rmax[j]=max(rmax[j+1],arr[j]);
    }

    for(int i=1;i<size-1;i++)
    {
        res+=min(rmax[i],lmax[i])-arr[i];
    }
    return res;
}
int main()
{
    int arr[5]={3,0,1,2,5};
    cout<<"Naive "<<rain_prb(arr,5);
    cout<<"Efficent "<<rain_trap(arr,5);
    return 0;
}
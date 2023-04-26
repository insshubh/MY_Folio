#include<bits/stdc++.h>
using namespace std;
bool arry_sort_chk(int arr[],int size) {
    for(int i=1;i<size;i++) {
        if(arr[i-1]>arr[i])
        return false;
    }

    return  true;
}
int main()
{
    int arr[4]={10,30,55,67};
    cout<<arry_sort_chk(arr,5);
    return 0;
}



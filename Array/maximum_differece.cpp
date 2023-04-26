#include<bits/stdc++.h>
using namespace std;
int max_diff(int arr[], int size) 
{
    int cur_max=(arr[1]-arr[0]);
    for(int i=0 ;i<size; i++) {
        for(int j=i+1;j<size;j++) {
            // if((arr[j]-arr[i])>cur_max) {
            //     cur_max=(arr[j]-arr[i]);
            cur_max=max(cur_max,arr[i]-arr[j]);
            }

        }
        return cur_max;
    }
int main()
{
    int arr[5]={10,20,30,6,7};
    cout<<max_diff(arr,5);
    return 0;
}
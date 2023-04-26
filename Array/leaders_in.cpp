#include<bits/stdc++.h>
using namespace std;
/*A leader is Greater than its all right element and the when only one element in array then it is a  leader , same element is not repeated .*/


void leader(int arr[], int size) {
    for(int i=0;i<size;i++) {
        bool flag=false;
        for(int j=i+1;j<size;j++) {
            if(arr[i]<=arr[j]) {
                flag=true;
                break;
            }
            
        }
        if(flag==false) {
            cout<<arr[i]<<" ";
        }
    }
}

// Efficient approach as we start from last element 

void leader_ap2(int arr[], int size) {
    int leader=arr[size-1];
    cout<<leader<<" ";
    for(int i=size-2;i>=0;i--) {
        if(leader<arr[i]) {
            leader=arr[i];
            cout<<leader<<" ";
        }
    }
}
int main()
{
//     int arr[5]={1,10,5,17,11};
//    // leader(arr,5);
//     leader_ap2(arr,5);












    return 0;
}

// n = 6
// A[] = {16,17,4,3,5,2}
// Output: 17 5 2
// Explanation: The first leader is 17 
// as it is greater than all the elements
// to its right.  Similarly, the next 
// leader is 5. The right most element 
// is always a leader so it is also 
// included
#include<bits/stdc++.h>
using namespace std;
void LINEARSEARCH(int arr[],int si,int key)
{
   int  i=0;
   int j=0;
  // while(j<si) {
    while(i<si) {
        cout<<i+1<<" comparison between"<<" "<<arr[i]<<" & "<<key<<" ";
        if(arr[i]==key) {
            cout<<"Found"<<endl;;
        }
        else {
            cout<<"Not found"<<endl;
        }
        i++;  
    }
  //  j++;
   //}
    
}
void BINARYSEARCH(int arr[],int si,int key) {
    int low=0;
    int high=si-1;
    int i=1;
    while(low<=high) 
    {
        int mid=(low+high)/2;
        cout<<i<<" iteration : mid = "<<arr[mid]<<" ";
        cout<<"Comparison between "<<arr[mid]<<"&"<<" "<<key<<endl;
        if(arr[mid]>key) {
            high=mid-1;
        }
        else if(arr[mid]<key) {
            low=mid+1;
        }
        else {
            if(arr[mid]==key) {
                cout<<"Matched"<<endl;
            }
            else {
                cout<<"Not matched";
            }
        }
        //i++;
    }
}
int main()
{
    int arr[5]={1,4,3,2,6};
    int key=2;
    LINEARSEARCH(arr,5,2);
   //BINARYSEARCH(arr,5,6);
    return 0;
}
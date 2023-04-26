#include <bits/stdc++.h>
using namespace std;
int consecutives_1(int arr[], int size)
{
    int count = 0;
    int curr=0;
    
    // for (int i = 0; i < size; i++)
    // {
    //     int curr=0;
    //     for(int j=i;j<size;j++)
    //     {
    //         if(arr[j]==1)
    //         {
    //             curr++;
    //         }
    //         else
    //         break;
    //     }
    //     count=max(count,curr);
    // }
    // return count;

    for(int i=0;i<size;i++)
    {
        
        if(arr[i]==0)
        {
            curr=0;
        }
        else
        {
            curr++;
            count=max(count,curr);
        }
    }
    return count;
}
int main()
{
    int arr[5] = {1, 1, 1, 0, 1};
    cout << consecutives_1(arr, 5);
    return 0;
}
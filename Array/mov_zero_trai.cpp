#include <bits/stdc++.h>
using namespace std;
void mov_zero(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {

            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] != 0)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
void dispalay(int arr[], int si)
{
    for (int i = 0; i < si; i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int arr[5] = {1, 2, 4, 3, 0};
    mov_zero(arr, 5);
   
    dispalay(arr, 5);
    return 0;
}
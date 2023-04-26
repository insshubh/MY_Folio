#include <bits/stdc++.h>
using namespace std;
void frequency_arr(int arr[], int size)
{
    int fre = 1;
    int i = 1;
    while (i < size)
    {
        while (i < size && arr[i] == arr[i-1])
        {
            fre++;
            i++;
        }
        cout << arr[i - 1] << " " << fre<<endl;
        fre = 1;
        i++;
    }

    if (size == 1 || arr[size - 1] != arr[size - 2])
    {
        cout << arr[size - 1] << " " << 1;
    }
}
int main()
{
    int arr[5] = {10, 10, 20, 20, 50};
    frequency_arr(arr, 5);

    return 0;
}
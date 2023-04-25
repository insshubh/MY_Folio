#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the num" << endl;
    cin >> num;
    int flag = 1;
    for (int i = 1; i < num / 4; i++)
    {
        if (i * i == num)
        {
            cout << num << " is a perfect square of " << i << endl;
            flag = 0;
            break;
        }
        else
        {
            continue;
        }
    }
    if (flag == 1)
    {
        cout << num << " is not perfrect square" << endl;
    }
    return 0;
}
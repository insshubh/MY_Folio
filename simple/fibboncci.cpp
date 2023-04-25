#include <bits/stdc++.h>
using namespace std;
int fibbonnaci_s(int num)
{
    int a = 0;
    int b = 1;
    if (num == 1)
        return a;
    else if (num == 2)
        return b;

    int next = 0;
    for (int i = 3; i <= num; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return next;
}
int main()
{
    cout << fibbonnaci_s(1);
    cout << endl;
    cout << fibbonnaci_s(5);
    return 0;
}
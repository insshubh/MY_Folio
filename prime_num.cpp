#include <bits/stdc++.h>
using namespace std;
bool prime_num(int num)
{
    if(num==1)
    return false;

    int res = 2;
    while (num > res)
    {
        if (num % res == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
    int main()
    {
        cout << prime_num(4);
    
    return 0;
    }
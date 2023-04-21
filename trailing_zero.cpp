#include<iostream>
using namespace std;

int main()
{
    // find the factorial 
    int num;
    cout<<"Enter the input "<<endl;
    cin>>num;
    int fact=1;
    for(int i=2;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of given input is "<<fact<<endl;;
    // for finding the no of trail zero 
    int res=0;
    while(fact%10==0)
    {
       res++;
       fact=fact/10;
    }
    cout<<"No of counting zero is "<<res;
    return 0;
}
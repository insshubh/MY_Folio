#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=7;
    
   int c=0;
    int k=n-1;
   for(int i=0;i<n;i++)
   {
    
    for(int j=0;j<n;j++)
    {
      if(j==c || j==k)
      {
        cout<<"X";
        
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
        c++;
        k--;
   }
    return 0;
}


// X---X
// -X-X-
// --X--
// -X-X-
// X---X
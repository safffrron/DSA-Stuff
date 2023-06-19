#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

int countSetBits(int n)
{
  int c=0;
      while(n>0)           //Or just use the built in function  __builtin_popcount(x)
      {
          n=n&(n-1);
          c++;
      }
  return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //input test cases
    int t;
    cin>>t;
    while(t--)
    {
        
    }
    
    return 0;
}  

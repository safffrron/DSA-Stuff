#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

int solve(int a,int b, int& x,int& y)
{
    if(b==0)
    {
      x=1;
      y=0;
      return a;
    }
  int x1,y1;
  g=solve(b,a%b,x1,y1);

  x=y1;
  y=x1 - (a/b)*y1;
  return g;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //input test cases
    int t;
    cin>>t;
    while(t--)
    {
      int a,b,c,x,y,g;
      cin>>a>>b>>c;
      g= solve(a,b,x,y);
      if(c%g==0)
      {
        cout<<(x*c)/g<<" "<<(y*c)/g<<endl;
      }
      else
      {
        cout<<"NO Solution"<<endl;
      }
      
    }
    
    return 0;
} 

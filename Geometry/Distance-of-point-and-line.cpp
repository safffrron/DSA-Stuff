#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

struct Point
{
  int x;
  int y;
};

struct Line 
{
  int m;
  int c;
};


double distance(Point p,Line l)
{
    int num= (l.m * p.x) - (p.y) + l.c ;
    double den= sqrt(1 + (l.m * l.m)) ;
    return num/den ;
  
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

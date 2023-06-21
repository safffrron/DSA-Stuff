#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

struct Point
{
    int x=0;
    int y=0;
};

int orientation(Point p1,Point p2, Point p3)
{
    ll ans= ((p3.x - p2.x) * (p2.y - p1.y))-((p3.y -p2.y)* (p2.x- p1.x)) ;
    if(ans>0)   // clockwise
    {
        return 1;
    }
    else if(ans<0)  //anti-clock
    {
        return -1;
    }
    else
    {
        return 0;
    }
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

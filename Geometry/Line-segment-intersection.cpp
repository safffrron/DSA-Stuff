#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

struct Point 
{
    ll x=0;
    ll y=0;
};

ll maxi(ll x, ll y)
{
    if(x>y)
    {
        return x;
    }
    return y;
}

ll mini(ll x, ll y)
{
    if(x<y)
    {
        return x;
    }
    return y;
}
//if q lies on pr
bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= maxi(p.x, r.x) && q.x >= mini(p.x, r.x) &&
        q.y <= maxi(p.y, r.y) && q.y >= mini(p.y, r.y))
        {
            
            return true;
            
        }
  
    return false;
}


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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //input test cases
    int t;
    cin>>t;
    while(t--)
    {
        Point p1,p2,p3,p4;
        cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y>>p4.x>>p4.y;
        
        //check orientation
        int or1= orientation(p1,p2,p3);
        int or2= orientation(p1,p2,p4);
        int or3= orientation(p3,p4,p1);
        int or4= orientation(p3,p4,p2);
        if((or1 != or2) && (or3 != or4))
        {
            cout<<"YES"<<end;
        }
        else{
        if (or1 == 0 && onSegment(p1, p3, p2)) {cout<<"YES"<<end;}
        else if (or2 == 0 && onSegment(p1, p4, p2)) {cout<<"YES"<<end;}
        else if (or3 == 0 && onSegment(p3, p1, p4)) {cout<<"YES"<<end;}
        else if (or4 == 0 && onSegment(p3, p2, p4)) {cout<<"YES"<<end;}
        else {cout<<"NO"<<end;}
        }
    }
    
    return 0;
} 

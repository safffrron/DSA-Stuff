#include <bits/stdc++.h>
#define ll long long
#define en '\n'
using namespace std;
 
struct Point
{
    ll x = 0;
    ll y = 0;
};
 
Point pivot;
 
int orientation(Point p1, Point p2, Point p3)
{
    ll ans = ((p3.x - p2.x) * (p2.y - p1.y)) - ((p3.y - p2.y) * (p2.x - p1.x));
    if (ans > 0) // clockwise
    {
        return 1;
    }
    else if (ans < 0) //anti-clock
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
 
ll distance(Point p, Point q)
{
    return (p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y);
}
 
bool comp(Point a, Point b)
{
    int o = orientation(a, b, pivot);
    if (o == -1)
        return true;
    else if (o == 0)
        return (distance(pivot, a) <= distance(pivot, b));
    else
        return false;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //input test cases
 
    int n;
    cin >> n;
 
    Point p[n + 1];
 
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i].x >> p[i].y;
        if (i == 1)
        {
            p[0] = p[1];
        }
        else if (p[i].x < p[0].x)
        {
            p[0] = p[i];
        }
        else if (p[i].x == p[0].x && (p[i].y < p[0].y))
        {
            p[0] = p[i];
        }
        else
        {
            ;
        }
    }
    pivot = p[0];
 
    sort(p, p + n + 1, comp);
 
    // checking last collinear points
    int i = n - 1;
    while (i > 1 && orientation(pivot, p[i], p[n]) == 0)
        i--;
    reverse(p + i + 1, p + n + 1);
 
    vector<Point> hull;
    for (int i = 1; i <= n; i++)
    {
        while (hull.size() > 1 && orientation(hull[hull.size() - 2], hull[hull.size() - 1], p[i]) > 0)
        {
            hull.pop_back();
        }
        hull.push_back(p[i]);
    }
 
    cout << hull.size() << en;
 
    for (auto i : hull)
    {
        cout << i.x << " " << i.y << en;
    }
 
    return 0;
}

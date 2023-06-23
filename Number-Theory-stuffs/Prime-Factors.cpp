#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

vector<int> solve(int n)
{
    vector<int> f;
    for(int x=2; x*x<=n;x++)
    {
        while(n%x==0)
        {
            f.push_back(x);
            n/=x;
        }
    }
    if(n>1) f.push_back(n);
    return f;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> v= solve(n);
    for(int i: v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}

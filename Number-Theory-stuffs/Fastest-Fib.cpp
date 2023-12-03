#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;

const int mod = 1e9 +7;

vector<vector<ll>> do_the_thing(vector<vector<ll>>& arr , ll n )
{
    
    if(n==0 || n==1)
    {
        return arr;
    }
    
    
    vector<vector<ll>> ans = do_the_thing(arr,n/2);
    
    // if n is even 
    ll one = ( ans[0][0]*ans[0][0] + ans[0][1]*ans[1][0] ) % mod ;
    ll two = (ans[0][0]*ans[0][1] + ans[0][1]*ans[1][1])%mod ;
    ll three = (ans[1][0]*ans[0][0] + ans[1][1]*ans[1][0])%mod ;
    ll four = (ans[1][0]*ans[0][1] + ans[1][1]*ans[1][1])%mod ;
    vector<vector<ll>> even = { {one , two} , { three , four } };
    
    if(n%2==1)
    {
        even = { {(one + two) %mod , one} , { (three + four)%mod  , three } };
    }
    
    return even ;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // to calculate Fib(n)  
    ll n  ;
    cin >> n  ;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    vector<vector<ll>> arr = {{1,1},{1,0}} ;
    vector<ll> B = {1,0};
    
    
    vector<vector<ll>> ans = do_the_thing(arr,n-1);
    
    cout<< ans[0][0]  ;
    return 0;
}

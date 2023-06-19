//You are given an array of size N with all elements with even frequency except one and you are supposed to find this element.
#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;



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
        int n,ans=0,s;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            ans= ans ^ s;
        }
        cout<<ans<<end;
    }
    
    return 0;
}   

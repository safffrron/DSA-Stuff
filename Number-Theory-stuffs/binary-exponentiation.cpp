#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;
const int M = 1e9 + 7;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //input test cases
    int n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = 1;
        while (b > 0)
        {
 
            if (b % 2 == 1)
            {
                ans = (ans * a) % M;
            }
            a = (a * a) % M;
            b /= 2;
        }
        cout << ans << end;
    }
 
    return 0;
}

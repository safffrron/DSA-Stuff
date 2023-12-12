#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;

const int mod = 1e9 +7;
const int maxN = 2e5+1;
const int val=19;
int bruh[maxN][val] ;

int main()
{
    
    int n , q ;
    cin >> n >> q ;
    
    for(int i = 0 ; i < n ; i++ ) 
    {
        cin>>bruh[i][0];
    }
    
    //implement the data structure 
    //string data[i][j]- ith number to 2^j th number's minimum
    for( int i = 1 ; i < val ; i++)
    {
        for(int j=0 ; j <= n-(1<<i) ; j++)
        {
        bruh[j][i] = min( bruh[j][i-1] , bruh[j+(1<<(i-1))][i-1]);
        }
    }
    
    
    for(int i = 0 ; i < q ; i++ )
    {
        int a , b ;
        cin >> a >> b ;
        a--;
        b--;
        
        int l = b-a+1;
        int x=log2(l);
        int ans = min( bruh[a][x] , bruh[int(b-(1<<x)+1)][x]);
        cout<<ans<<next;
    }
    
    return 0;
}

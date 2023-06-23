#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

bool prime[100000001];
memset(prime,true,sizeof(prime));

vector<int> primeNumbersTillN(int n) 
{ 
	 for(int i=2; i*i<=n;i++)
	 {
		 if(prime[i])
		 {
			 for(int j=i*i;j<=n;j+=i)
			 {
				 prime[j]=false;
			 }
		 }
	 }

	 vector<int> p;
	 for(int i=2;i<=n;i++)
	 {
		 if(prime[i])
		 {
			 p.push_back(i);
		 }
	 }
	 return p;

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
        
    }
    
    return 0;
} 

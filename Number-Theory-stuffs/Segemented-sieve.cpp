#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) 
{ 
 	// Write your code here
	 bool prime[n+1];
     memset(prime,true,sizeof(prime));
     prime[1]=false;
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

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int l,u;
        cin>>l>>u;

		int ar[u-l+1];
		memset(ar,true,sizeof(ar));

        vector<int> primes= sieve(sqrt(u));

        for (int i : primes)
		{
			int start=(l/i)*i;
			if(l%i!=0 ) start+=i;

			if(i>=l) start+=i;

			for(int j=start;j<=u;j+=i)
			{
				ar[j-l]=false;
			}
		}

		for(int i=l;i<=u;i++)
		{
			if(ar[i-l] && i!=1)
			{
				cout<<i<<" ";
			}
		}
        cout<<'\n';
    }
    return 0;
}

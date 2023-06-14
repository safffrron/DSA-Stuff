#include <bits/stdc++.h>
#define ll long long
using namespace std;

int binary_search(int *ar,int n, int target)
{
    // Assuming the array is sorted 
    int lower = 0;
    int upper = n-1;
    while(lower <= upper)
    {
        int mid=(upper + lower)/2;
        if(ar[mid] == target)
        {
            return mid;
        }
        if(ar[mid] >= target) upper=mid-1;
        else lower=mid+1;
        
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


#include <bits/stdc++.h>
using namespace std;

void merge(int ar[],int begin,int mid,int end)
{
    //create two duplicate array

    int size_left=mid-begin+1;
    int size_right=end-mid;
    int left[size_left],right[size_right];
    
    //fill those arrays 

    for(int i=0;i<size_left;i++)
    {
        left[i]=ar[begin+i];
    }
    
    for(int i=0;i<size_right;i++)
    {
        right[i]=ar[mid+1+i];
    }
    
    //create an indexer for both array and main array

    int j=0,k=0;
    int m=begin;
    
    while(j<size_left && k<size_right)
    {
        if(left[j]<right[k])
        {
            ar[m]=left[j];
            j++;
        }
        else
        {
            ar[m]=right[k];
            k++;
        }
        m++;
    }
    
    
    while(j<size_left)
    {
        ar[m]=left[j];
        j++;
        m++;
    }
    
    while(k<size_right)
    {
        ar[m]=right[k];
        k++;
        m++;
    }
    
}

void mergesort(int ar[],int begin,int end)
{
    if(begin>=end)
    {
        return ;
    }
    
    int mid= begin +((end-begin)/2);
    mergesort(ar,begin,mid);
    mergesort(ar,mid+1,end);
    merge(ar,begin,mid,end);

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int ar[]={9,8,7,6,5,4,3,2,1};
    mergesort(ar,0,8);
    
    for(int i=0;i<9;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<'\n';

    return 0;
}

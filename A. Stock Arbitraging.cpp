
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r,smin=0,bmax=0,sum=0;
    cin>>n>>m>>r;
    int arr[n],arr1[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    smin=arr[0];
    bmax=arr1[m-1];
    if(smin<bmax)
    {
        double f=floor(r/smin);
        sum=r+(f*(bmax-smin));
        cout<<sum<<endl;
    }
    else
        cout<<r<<endl;
}

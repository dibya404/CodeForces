#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,ans=0;
    cin>>n>>t;
    int arr[t];
    for(int i=1;i<=t;i++)
    {
        cin>>arr[i];
    }
    arr[0]=1;
    //ans=arr[1]-1;
    for(int i=1;i<=t;i++)
    {
        if(arr[i-1]<=arr[i])
        {
            ans=ans+(arr[i]-arr[i-1]);
        }
        else         {
            ans=ans+((n-arr[i-1])+arr[i]);
        }
    }
    cout<<ans<<endl;
}

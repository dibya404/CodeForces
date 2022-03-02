#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,ans1=0,ans2=0;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        arr[i]=pow(2,i);
    }
    if(n>=4)
    {
    int ans=0;
    for(int i=1;i<n/2;i++)
    {
        ans1+=arr[i];
    }
    ans1=ans1+arr[n];
    for(int i=n/2;i<n;i++)
    {
        ans2+=arr[i];
    }
    ans=ans1-ans2;
    cout<<ans<<endl;
    }
    else
    {
    int ans=0;
    ans=arr[n]-arr[1];
    cout<<ans<<endl;
    }

   }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,cnt=0,ans=0,ans1=0;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        ans1=86400-arr[i];
        ans=ans+ans1;
        cnt++;
        if(ans>=t)
            break;
    }
    cout<<cnt<<endl;
}

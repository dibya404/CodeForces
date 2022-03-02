#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double ans=0,ans1=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            ans=ans+arr[i];
        }
        ans1=(ans/(n-1))+arr[n-1];
        cout<<fixed<<setprecision(9)<<ans1<<endl;

    }
}

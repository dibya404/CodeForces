#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,big=0,ans=0;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            big=arr[i]*arr[i+1];
            if(big>ans)
            {
                ans=big;
            }
        }
        cout<<ans<<endl;




    }
}

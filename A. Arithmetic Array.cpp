#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sum=sum-n;
        if(sum<0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }

    }
}

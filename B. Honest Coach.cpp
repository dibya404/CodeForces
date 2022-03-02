#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],min0,sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        min0=arr[n-1];

        for(int i=1;i<n;i++)
        {
             sum=arr[i]-arr[i-1];

            if(sum<min0)
            {
                min0=sum;
            }
        }
        cout<<min0<<endl;
    }
}

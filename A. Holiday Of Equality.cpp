#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=n-2;i>=0;i--)
        {
            sum=sum+(arr[n-1]-arr[i]);
        }
        cout<<sum<<endl;
    }
}

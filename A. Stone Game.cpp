#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min0=0,mini=9999,maxo=0,max0=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<mini)
            {
                min0++;
                mini=arr[i];
            }
            if(arr[i]>max0)
            {
                maxo++;
                max0=arr[i];
            }
        }
        cout<<maxo+min0<<endl;
    }
}

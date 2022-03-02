#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        int arr[n];
        arr[0]=99999999;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(arr[i]<arr[i-1])
                cnt++;
        }
        if(cnt<=k)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

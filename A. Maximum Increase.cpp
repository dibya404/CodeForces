
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1,ans=0,ans1=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            cnt++;
            ans1=cnt;
        }
        else{
            ans=max(ans,ans1);
            cnt=1;
        }
    }
    ans=max(ans,cnt);
    cout<<ans<<endl;

}

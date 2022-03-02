
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,ans=0;
        cin>>a;
        int arr[a];
        for(int i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
        ans=(arr[0] & arr [a-1]);
        cout<<ans<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    if(n%2==0)
    {
        ans=n/2;
        cout<<ans<<endl;
        for(int i=0;i<ans;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        ans=(n-3)/2;
        cout<<ans+1<<endl;
        for(int i=0;i<ans;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;

    }
}

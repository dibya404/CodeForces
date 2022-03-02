#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ans=0;
        cin>>n;
        if(n<=6)
        {
            cout<<15<<endl;
        }
        else
        {
            if(n%2==0)
            {
                ans=n*2.5;
                cout<<ans<<endl;
            }
            else
            {
                ans=(n+1)*2.5;
                cout<<ans<<endl;
            }
        }
    }
}

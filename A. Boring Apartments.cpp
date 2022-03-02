#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            int sum =0,cnt=0,ans=0;
        while(n!=0)
        {
             sum =  n % 10;
             n=n/10;
             cnt++;
        }
        if(cnt==1)
        {
            ans=(sum-1)*10+1;
            cout<<ans<<endl;
        }
        else if(cnt==2)
        {
            ans=(sum-1)*10+3;
            cout<<ans<<endl;
        }
        else if(cnt == 3)
        {
            ans=(sum-1)*10+6;
            cout<<ans<<endl;
        }
        else
        {
            ans=sum*10;
            cout<<ans<<endl;
        }

        }

    }
}

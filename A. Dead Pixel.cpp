#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int sum=0,sum1=0,ans=0,sum2=0,sum3=0,max1=0;
        cin>>a>>b>>x>>y;
        sum1=(max({x,a-1-x}))*b;
        sum2=a*(max({y,b-1-y}));
        ans=max({sum1,sum2});
        cout<<ans<<endl;


    }
}

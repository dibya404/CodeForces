#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n,big=0,big1=0,ans=0,ans1=0,ans2=0,ans3=0;
        cin>>a>>b>>c>>n;
        big=max(a,b);
        big1=max(big,c);
        ans=big1-a;

        ans1=big1-b;
        ans2=big1-c;
        ans3=ans+ans1+ans2;

        if(ans3>n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if((n-ans3)%3==0)
        {
            cout<<"YES"<<endl;
            //cout<<n-ans3<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }
        }
    }
}

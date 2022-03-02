#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,ans=0;
    cin>>n;
    while(n>0)
    {
        if(n>=100)
        {
            sum=n/100;
            n=n%100;
            ans=ans+sum;
        }
        else if(n>=20)
        {
            sum=n/20;
            n=n%20;
            ans=ans+sum;
        }
        else if(n>=10)
        {
            sum=n/10;
            n=n%10;
            ans=ans+sum;
        }
        else if(n>=5)
        {
            sum=n/5;
            n=n%5;
            ans=ans+sum;
        }
        else
        {
            sum=n/1;
            n=n%1;
            ans=ans+sum;
        }
    }
    cout<<ans<<endl;
}

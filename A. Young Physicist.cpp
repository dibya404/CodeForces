#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0,sum1=0,sum2=0;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sum=sum+x;
        sum1=sum1+y;
        sum2=sum2+z;
    }
    if(sum ==0 && sum1==0 && sum2==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

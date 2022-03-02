#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,sum1=0,sum2=0;
        cin>>x>>y>>n;
        sum1=n-(n%x)+y;
        sum2=n-(n%x)-(x-y);
        if(sum1>sum2 && sum1<=n)
        {
            cout<<sum1<<endl;
        }
        else
            cout<<sum2<<endl;
    }
}

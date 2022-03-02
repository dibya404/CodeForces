#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,x=0;
        cin>>n;
        while(n>0)
        {
            ans=n%10;
            n=n/10;
            if(ans>x)
                x=ans;
        }
        cout<<x<<endl;

    }
}

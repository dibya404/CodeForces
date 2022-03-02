#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,s,x;
        cin>>a>>b>>n>>s;
        if(n*a+b>=s)
        {
            x=s%n;
            if(x<=b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

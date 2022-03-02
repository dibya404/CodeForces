#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,v,j,e,f,x,sum=0,add=0;
    cin>>t>>s>>v>>j>>e>>f;
    if(f>e)
    {
        x=min({s,v,j});
        sum=x*f;
        if(j>x)
        {
            j=j-x;
            add=(min(t,j))*e;
        }
        cout<<add+sum<<endl;
    }
    else
    {
        x=min({t,j});
        sum=x*e;
        if(j>x)
        {
            j=j-x;
            add=(min({s,v,j}))*f;
        }
        cout<<add+sum<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans;
    cin>>a>>b>>c;
    if(b>=a+1 && c>=a+2)
    {
        ans=a*3+3;
        cout<<ans<<endl;
    }
    else if(a+2>c && c-1<=b)
    {
        ans=(c-2)*3+3;
        cout<<ans<<endl;
    }
    else if(a+1>b && b+1<=c)
    {
        ans=(b-1)*3+3;
        cout<<ans<<endl;
    }
    else
    {
        ans=a*3-3;
        cout<<ans<<endl;

    }

}

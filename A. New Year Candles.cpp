#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,rem=0,ans=0;
    cin>>a>>b;
    ans=a;

    while(1)
    {
        rem=a/b;
        a=rem+(a%b);
        ans=ans+rem;
        if(a<b)
            break;
    }

    cout<<ans<<endl;
}

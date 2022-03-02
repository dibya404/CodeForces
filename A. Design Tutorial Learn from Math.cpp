#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    if(n%2==0)
    {
        ans=n/2;
        if(ans%2==0)
            cout<<ans<<" "<<ans<<endl;
        else
            cout<<ans+1<<" "<<ans-1<<endl;
    }
    else
        cout<<9<<" "<<n-9<<endl;
}

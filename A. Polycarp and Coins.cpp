#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,an=0;
        cin>>n;
        if(n>1)
        {
            int ans=n/3;
        an=n-ans;
        an=an/2;
        if(ans+an*2!=n)
            cout<<ans+1<<" "<<an<<endl;
        else
            cout<<ans<<" "<<an<<endl;

        }
        else
            cout<<n<<" "<<0<<endl;

    }
}

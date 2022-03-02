
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
    cin>>n;

    if(n%2==0)
    {
        long long ans=(n/2);
        cout<<ans<<endl;
    }
    else
    {
           long long ans=(n/2)+1;
           cout<<ans<<endl;
    }


    }
}

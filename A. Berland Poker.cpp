#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(m ==0)
        {
            cout<<0<<endl;
        }
        else if((n/k)>=m)
        {
            cout<<m<<endl;
        }
        else
        {
           cout<<(n/k)-((m - (n/k)) + (k - 2)) / (k - 1)<<endl;
        }
    }
}

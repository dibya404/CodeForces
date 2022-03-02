#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,t,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n<=2)
        {
            cout<<1<<endl;
        }
        else
        {
            cnt=1;
            n=n-2;
            while(n>0)
            {
                n=n-x;
                cnt++;
            }
            cout<<cnt<<endl;
        }

    }
}

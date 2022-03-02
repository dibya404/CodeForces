
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=3)
        {
            if(n==1)
            {
                cout<<0<<endl;
            }
            else if(n==2)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else if(n>3 && n%2==0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
}

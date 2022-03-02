#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,ans=0;
        cin>>n>>a;
        if(n%a==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<a-(n%a)<<endl;
        }


    }




}

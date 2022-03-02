#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else
        {
            a=abs(a-b);
            if(a%10==0)
                cout<<a/10<<endl;
            else
                cout<<(a/10)+1<<endl;
        }
    }
}

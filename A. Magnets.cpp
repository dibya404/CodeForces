#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans=0,cnt=0;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(ans!=x)
        {
            cnt++;
            ans=x;
        }
    }
    cout<<cnt<<endl;
}

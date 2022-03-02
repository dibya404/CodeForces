#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,sum=0,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n!=m)
        {
            sum=abs(m-n);
            if(sum>=2)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}

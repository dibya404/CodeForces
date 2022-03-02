#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,ans;
    cin>>k>>r;
    for(int i=1;;i++)
    {
        if((k*i)%10==0)
        {
            ans=i;
            cout<<ans<<endl;
            break;
        }
        else
        {
            ans=k*i;
            ans=ans%10;
            //cout<<ans<<" "<<i<<endl;
            if(ans==r)
            {
                ans=i;
                cout<<ans<<endl;
                break;
            }
        }
    }
}

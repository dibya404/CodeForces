
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,mint,sum=0,cnt=0,x;
    cin>>t>>mint;
    x=240-mint;
    for(int i=1;i<=t;i++)
    {
        sum=sum+i*5;

        if(sum>x)
        {
            break;
        }
        else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

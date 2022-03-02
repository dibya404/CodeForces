#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,sum=1,sum2=1;
    cin>>a>>b;
    if(b>a)
    {
    for(int i=a;i>=1;i--)
    {
        sum=sum*i;
    }
    cout<<sum<<endl;
    }
    else
    {
        for(int i=b;i>=1;i--)
    {
        sum2=sum2*i;
    }
    cout<<sum2<<endl;
    }


    /*if(sum>sum2)
    {
        for(int i=sum2;i>1;i-=2)
        {
            if(sum%i==0)
            {
                cout<<i<<endl;
                break;
            }

        }
    }
    else
    {
        for(int i=sum;i>1;i-=2)
        {
            if(sum2%i==0)
            {
                cout<<i<<endl;
                break;
            }

        }
    }*/

}

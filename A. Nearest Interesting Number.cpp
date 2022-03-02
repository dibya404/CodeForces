#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum=0,n,x,m;
    cin>>n;

    for(int i=n;i<n+20; i++)
    {

        x=i;
        while(x>0)
        {

            m=x%10;
            sum=sum+m;
            x=x/10;

        }
        if(sum%4==0)
        {

            cout<<i<<endl;
            break;
        }
        sum=0;
    }
}

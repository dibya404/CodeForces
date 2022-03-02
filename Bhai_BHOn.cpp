#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        for(int i=2;i<=n;i++)
        {
             if((i != 0) && ((i &(i-1)) == 0))
            {
                sum=sum-i;
            }
            else
            {
                sum=sum+i;
            }

        }
        cout<<sum-1<<endl;
    }
}

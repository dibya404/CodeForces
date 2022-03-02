#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1000],b[1000],dept[1000],ar[1000],tm[100];
    cin>>t;
    while(t--)
    {
        dept[0]=0;
        b[0]=0;
        cin>>n;
        for(int i =1;i<=n;i++)
        {
            cin>>a[i]>>b[i];

        }
          for(int i =1;i<=n;i++)
        {
            cin>>tm[i];

        }
          for(int i =1;i<=n;i++)
        {
             ar[i]=dept[i-1]+(a[i]-b[i-1])+tm[i];
            dept[i]=max(b[i],(ar[i]+((b[i]-a[i]+1)/2)));

        }

        cout<<ar[n]<<endl;

    }
}

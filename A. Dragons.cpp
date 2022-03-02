#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,m,cnt=0;
    cin>>s>>n;
    int x[n],y[n];
    m=s;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
        for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(x[i]<m)
        {
            m=m+y[i];
            cnt++;
        }
        else
        {
            break;
        }
    }
    if(cnt == n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

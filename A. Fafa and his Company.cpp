#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,cnt=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        x=n-i;
        if(x%i==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

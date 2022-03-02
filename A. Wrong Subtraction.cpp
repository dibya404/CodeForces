#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,k,sum=0;
    cin>>x>>k;
    while(k--)
    {
        sum=x%10;
        if(sum!=0)
        {
            x=x-1;
        }
        else
        {
            x=x/10;
        }
    }
    cout<<x<<endl;
}

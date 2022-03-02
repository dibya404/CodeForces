#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,t,a,q,x;
    cin>>p>>t>>a>>q;
    int n=1;
    while(true)
    {
        x=p*(t/100);
        p=p+x+a;
        if(p<q)
        {
            n++;
        }
        else
        {
            break;
        }
    }
    cout<<n<<endl;
}

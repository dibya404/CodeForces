#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,m,k,f=0;
    double s=0;
    cin>>n>>m>>k;
    p=floor((k-1)/2);
    f=(floor(p/m))+1;
    s=((int)p%(int)m)+1;
    if(k%2==0)
    {
        cout<<f<<" "<<s<<" "<<"R"<<endl;
    }
    else
        cout<<f<<" "<<s<<" "<<"L"<<endl;
}

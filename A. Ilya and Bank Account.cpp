#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    cin>>n;
    if(n>0)
    {
        cout<<n<<endl;
    }
    else
    {
        x=n/10;
        y=(n%10)+(n/100)*10;
        if(x>y)
        {
            cout<<x<<endl;
        }
        else
        {
             cout<<y<<endl;
        }
    }
}

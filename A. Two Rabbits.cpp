#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b,c=0;
        cin>>x>>y>>a>>b;
       cout << ((y - x) % (a + b) == 0 ? (y - x) / (a + b) : -1) << endl;
    }

}

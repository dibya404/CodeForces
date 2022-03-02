#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,w=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int i=0;i<m;i++)
            {
                if(w<1)
                {
                    cout<<"W";
                    w++;
                }
                else
                {
                    cout<<"B";
                }
            }
            cout<<endl;
        }
    }
}

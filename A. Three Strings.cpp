#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        int flag =0;
        cin>>a>>b>>c;
        for(int i=0;i<a.size();i++)
        {
            if(c[i]==a[i] || c[i]==b[i])
            {

            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

}

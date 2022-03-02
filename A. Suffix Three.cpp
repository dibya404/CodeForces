#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n;
        n=s.size()-1;
        if(s[n]=='o')
        {
            cout<<"FILIPINO"<<endl;
        }
        else if(s[n]=='u')
        {
            cout<<"JAPANESE"<<endl;
        }
        else
        {
            cout<<"KOREAN"<<endl;
        }
    }
}

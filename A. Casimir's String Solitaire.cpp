#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a=0,b=0,c=0;
         string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else if(s[i]=='B')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if(b==(a+c))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }

}

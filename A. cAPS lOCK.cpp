#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l=0;
    cin>>s;
   /**/
    for(int i =1;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
           l++;
        }
    }
    if(l==s.size()-1)
    {
         if(s[0]>=97 && s[0]<=122)
    {
        s[0]=s[0]-32;
    }
    else
    {
        s[0]=s[0]+32;
    }
        for(int i =1;i<s.size();i++)
    {
        s[i]=s[i]+32;
    }
    }
    cout<<s<<endl;
}

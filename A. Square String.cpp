
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.length()%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int flag=0;
            for(int i=0;i<s.length()/2;i++)
            {
                if(s[i]!=s[(s.length()/2)+i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}

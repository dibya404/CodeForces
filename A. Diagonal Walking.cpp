#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='R')
        {
            if(str[i+1]=='U')
                {
                    cnt++;
                    i=i+1;
                }
        }
        else if(str[i]=='U')
        {
            if(str[i+1]=='R')
                {
                    cnt++;
                    i=i+1;
                }
        }
    }
    cout<<n-cnt<<endl;
}

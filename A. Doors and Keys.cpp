#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int temp[3];
        cin>>s;
        int x=s.size();
        if(s[0]=='R' || s[0]=='G' || s[0]=='B' )
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int j=0,flag=0;
            for(int i=0; i<x; i++)
            {
                if(s[i]>=97 && s[i]<=122)
                {
                    temp[j]=s[i];
                    j++;
                }
                else
                {
                    int cnt=0;
                    for(int k=0; k<j; k++)
                    {
                        if(temp[k]-s[i]==32 )
                        {
                            cnt=0;
                            break;
                        }
                        else
                        {
                            cnt++;
                        }
                    }
                    if(cnt==j)
                    {
                        flag=1;
                        break;
                    }
                }
            }
                if(flag==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }

        }

    }


}

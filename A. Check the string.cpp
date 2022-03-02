#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int a=0,b=0,c=0,flag1=0,flag2=0;
    cin>>str;
    int n=str.size();
    if(str[0]=='a' && str[str.size()-1]=='c')
    {
        for(int i=0;i<n;i++)
        {
            if(str[i]=='a')
                {
                    a++;
                    if(str[i+1]=='c')
                    {
                        flag1=1;
                        break;
                    }
                }
            else if(str[i]=='b')
            {
                b++;
                if(str[i+1]=='a')
                    {
                        flag1=1;
                        break;
                    }
            }
            else
            {
                c++;
                if(str[i+1]=='b')
                    {
                        flag1=1;
                        break;
                    }
            }
        }
        if(flag1 ==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            if((c==b)||(c==a))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        }
    }
    else
        cout<<"NO"<<endl;
}

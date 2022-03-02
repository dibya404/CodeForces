#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int c,pos,pos2,i;
    cin>>t;
    string s,a;
    while(t--)
    {
        c=0,pos=0,pos2=0;
        cin>>s;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                //a+='1';
                pos=i;
                break;
            }
        }
        for(i=s.length(); i>=pos; i--)
        {
            if(s[i]=='1')
            {
                pos2=i;
                break;
            }
        }
        for(i=pos; i<pos2; i++)
        {
            if(s[i]=='0')
                c++;
            else
                a+='1';
        }
        //cout<<a<<endl;
        cout<<c<<endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        string s;
        int z=0,a=-1,x=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'&& s[i+1]=='0')
        {
           a=i;
        }
    }
     for(int i=s.size();i>0;i--)
    {
        if(s[i]=='1'&& s[i-1]=='0')
        {
            x=i;
            break;
        }
    }
    if(a>=0 && x>0 && x>a)
    {
        z=(x-a)-1;
    }

    cout<<z<<endl;
   }

}
*/

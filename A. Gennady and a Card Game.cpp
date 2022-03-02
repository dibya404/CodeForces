#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input,str;
    cin>>input;
    int flag =0;
    for(int i=0;i<5;i++)
    {
        cin>>str;
        if(str[0]==input[0])
        {
            flag=1;
        }
        else if(str[1]==input[1])
            flag=1;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,d=0,n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
        {
            a++;
        }
        else
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str="I hate ";
    string str1="I love ";
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<str;
        }
        else
            cout<<str1;
        if(i+1==n)
        {
            cout<<"it"<<endl;
        }
        else
            cout<<"that ";
    }

   // cout<<"it"<<endl;
}

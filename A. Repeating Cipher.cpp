#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=1,j=0;
    cin>>n;
    string s;
    char x[n];
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        x[j]=s[i];
        j++;
        i=i+k;
        k++;
    }
    for(int i=0;i<j;i++)
    {
        cout<<x[i];
    }

}

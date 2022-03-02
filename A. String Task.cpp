#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int n=str.length();
    int j=0;
    string temp[n];
    for(int i=0;i<n;i++)
    {
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u'&& str[i]!='y')
        {
            temp[j]=str[i];
            j++;
        }
    }
    for(int i=0;i<j;i++)
    {
        cout<<'.'<<temp[i];
    }
    cout<<endl;

}

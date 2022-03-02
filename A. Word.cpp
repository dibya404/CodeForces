#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    scanf("%s",&s);
    int cap=0,lo=0;
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cap++;
        }
        else
            lo++;
    }
    char arr[100];
    if(cap>lo)
    {
           for(int i=0; i<l; i++)
        {
            arr[i]=toupper(s[i]);
            cout<<arr[i];
        }
    }
    else
    {
         for(int i=0; i<l; i++)
        {
           arr[i]=tolower(s[i]);
            cout<<arr[i];
        }
    }
    cout<<endl;

}

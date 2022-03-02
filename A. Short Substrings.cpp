#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        if(str.length()>2)
        {
            cout<<str.front();
            for(int i=2; i<str.length(); i=i+2)
            {
                if(str[i] == str[i-1])
                {
                    cout<<str[i];
                }
            }
            cout<<str.back()<<endl;
        }
        else
        {
            cout<<str<<endl;

        }
    }

    return 0;
}

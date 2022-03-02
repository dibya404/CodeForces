#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, temp1, temp2;
    cin>>str1>>str2;
    int cnt = 0;

    if(str1.size() != str2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i=0; i<str1.size(); i++)
        {
            if(str1[i] != str2[i])
            {
                temp1[cnt] = str1[i];
                temp2[cnt] = str2[i];
                cnt++;

                if(cnt>2)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }


    if(temp1[0] == temp2[1] && temp1[1] == temp2[0])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int bun, pat, cut, h_p, c_p, val = 0;

        cin>>bun>>pat>>cut;
        cin>>h_p>>c_p;

        bun = bun/2;

        if(bun<1)
        {
            cout<< 0 <<endl;
        }
        else
        {
            while(bun>0)
            {
                if(c_p>=h_p)
                {
                    if(cut>0)
                    {
                        val += c_p;
                        cut--;
                        bun--;
                    }
                    else
                    {
                        val += h_p;
                        pat--;
                        bun--;

                        if(pat == 0)
                        {
                            break;
                        }
                    }
                }
                else if(h_p>c_p)
                {
                    if(pat>0)
                    {
                        val += h_p;
                        pat--;
                        bun--;
                    }
                    else
                    {
                        val += c_p;
                        cut--;
                        bun--;

                        if(cut == 0)
                        {
                            break;
                        }
                    }
                }
            }
            cout << val <<endl;
        }


    }

    return 0;
}

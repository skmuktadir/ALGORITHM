#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test!=0)
    {
        string strg;
        cin>>strg;
        if(strg=="YES")
        {
            cout<<"YES"<<"\n";
        }
        else if(strg=="YEs")
        {
            cout<<"YES"<<"\n";
        }
        else if(strg=="Yes")
        {
            cout<<"YES"<<"\n";
        }
        else if(strg=="yes")
        {
            cout<<"YES"<<"\n";
        }
        else if(strg=="yeS")
        {
            cout<<"YES"<<"\n";
        }
        else if(strg=="yES")
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

        test--;
    }
}
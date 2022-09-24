#include<bits/stdc++.h>
using namespace std;

void fun(int test_case)
{
    int counter=1;
    int test=test_case;
    while(test!=0)
    {
        int numberC,sum=0,sum2=0;
        cin>>numberC;
        for(int i=1;i<=(sqrt(numberC)+2);i++)
        {
            int j=numberC;
            while(j!=0)
            {
                //cout<<j<<" ";
                if(((3*j)+5*i)==numberC)
                {
                    sum=3*j;
                    break;
                    
                }
                j--;
            }
            if(sum!=0)
            {
                break;
            }
            
        }
        if(sum!=0)
        {
            cout<<"Case "<<counter<<": "<<sum<<"\n";
        }
        else
        {
            cout<<"Case "<<counter<<": "<<"-1"<<"\n";
        }
        counter++;

        test--;
    }
}
int main()
{
    int test;
    cin>>test;
    fun(test);

    
}
#include<bits/stdc++.h>
using namespace std;
void linear_search(int x[100],int num);//prototype function;
int main()
{
    srand(time(0)+1);
    freopen("1000_random.txt","w",stdout);

    for(int i=0;i<=1000;i++)
    {
        cout<<(rand()+1)%1000<<"\n";
    }
    freopen("1000_random.txt","r",stdin);//freopen means (file re open)// it's structure is (freopen("name of this text file","r/w",stdin/stdout))//(r/w=read, write)//(stdin or stdout means standard input) or (stdout means
    int array[1000];
    //cout<<"This number is gen"
    for(int i=0;i<1000;i++)
    {
        cin>>array[i];
        cout<<array[i]<<" ";
    }
    //swap
    linear_search(array,19587770);
}






void linear_search(int x[100],int num)
{
    int n=num;
    //bubble short
    for ( int i=0;i<=98;i++)
    {
         for ( int i=1;i<=99;i++)
        {
       
            if(x[i]>x[i+1])
            {
                int temp;
                temp=x[i];
                x[i]=x[i+1];
                x[i+1]=temp;
                
            }

         }
       
    }
    //after bubble short
    for(int i=0;i<100;i++)
    {
        cout<<x[i]<<"\n";
    }
    //linear search
    cout<<" "<<"\n";
    for(int i=0;i<100;i++)
    {
        if(x[i]==n)
        {
            cout<<"THE number is founded and this number is "<<x[i];
        }
        
    }
}
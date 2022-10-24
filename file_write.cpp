#include<bits/stdc++.h>
using namespace std;
//int fun(int x)
int main()
{
    int rand_1;
    srand(time(0)+1);
    freopen("100_random.txt","w",stdout);

    for(int i=0;i<=100;i++)
    {
        cout<<(rand()+1)%100<<"\n";
    }
}
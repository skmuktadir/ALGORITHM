//input in array from file
#include<bits/stdc++.h>
using namespace std;
//int fun(int x)
int main()
{
    int rand_1;
    srand(time(0)+1);
    freopen("100_random.txt","r",stdin);

    int array[100];
    for(int i=0;i<=100;i++)
    {
        cin>>array[i];
        cout<<array[i]<<" ";
    }
}
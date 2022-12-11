#include<bits/stdc++.h>
using namespace std;
//int fun(int x)
void countDegree(int **p,int n)
{
    int *d =new int [n];
    for(int i=0;i<n;i++)
    {
        d[i]=0;
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cout<<"matrix"<<"["<<i<<"]"<<" "<<"["<<j<<"] :";
            if(p[i][j]==1)
            {
                d[i]++;
            }
            //cout<<p[i][j]<<" ";
        }
        ///cout<<"\n";
    }
     for(int i=0;i<n;i++)
    {
        cout<<i<<" degree = "<<d[i]<<"\n";
    }
}
void graph(int **p,int n){

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cout<<"matrix"<<"["<<i<<"]"<<" "<<"["<<j<<"] :";
            cout<<p[i][j]<<" ";
        }
        cout<<"\n";
    }

}
int main()
{
    //int matrix[7][7];
    int node,edge;
    cin>>node>>edge;
    //int m[node][node];
    // for 2 D matrix;
    int **m=new int*[node];
    for(int i=0;i<node;i++)
    {
        m[i]=new int [node];
    }

    for(int i=0;i<node;i++)
    {
        for(int j=0;j<node;j++)
        {
            //cout<<"matrix"<<"["<<i<<"]"<<" "<<"["<<j<<"] :";
            m[i][j]=0;
        }
    }
    int u,v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        m[u][v]=1;// it's for directed graph;

    }
    graph(m,node);
    countDegree(m,node);
    
/*
input 
// 7 is
7 10  
0 1
0 2
0 3
1 3
2 4
2 5
3 6
3 4
4 5
4 6
/**/
/**
 * /
 
 6 9
 0 1
 0 5
 1 2
 1 4
 2 3
 3 0
 3 1
 4 3
 5 4
*/
}
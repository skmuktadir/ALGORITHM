#include<bits/stdc++.h>
using namespace std;
#define x 100
vector<int>g[x];
int visited[x];
int dis[x];
//int fun(int x)

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
void bfs(int v)
{
    queue<int>q;
    q.push(v);
    visited[v]=1;
    dis[v]=0;
    while (!q.empty())
{
    int p=q.front();
    q.pop();
    cout<<p<<" ";
    for(int i=0;i<g[p][i];i++)
    {
        int next = g[p][i];
        if(visited[next]==0){
            q.push(next);
            visited[next]=1;
            dis[next]=dis[p]+1;
        } 
    }
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
        m[u][v]=m[v][u]=1;

    }

    graph(m,node);
    //countDegree(m,node);
    bfs(2);

    
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
*/
}
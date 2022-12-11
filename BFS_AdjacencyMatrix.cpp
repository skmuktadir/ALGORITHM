#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v);
int main() {

    int u,v,edge;
    cout<<"Enter the number of VERTEX and EDGE : ";
    cin>>n>>edge;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    cout<<"Enter the adjacency matrix : ";
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        a[u][v]=a[v][u]=1;

    }
    cout<<"\nYOUR the adjacency matrix : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Enter the value of starting vertex : ";
    cin>>v;
    for(i=0;i<n;i++)
    {
        q[i]=0;
        visited[i]=0;
    }
    bfs(v);
    cout<<"the reachable nodes are: ";
    for(i=0;i<n;i++)
    {
        if(visited[i])
        {
            cout<<i<<"  ";
        }
    }
    cout<<"\n";
}
void bfs(int v)
{
    for(i=0;i<n;i++)
    {
        if(a[v][i]&&!visited[i])
        {
            q[++r]=i;
        }
        if(f<=r)
        {
            visited[q[f]]=1;
            bfs(q[++f]);
        }

    }
}
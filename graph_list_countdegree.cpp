#include<bits/stdc++.h>
using namespace std;
void countDegree(vector<int>p[],int n)
{
    int *d =new int [n];
    for(int i=0;i<n;i++)
    {
        d[i]=0;
    }
     for(int i=0;i<n;i++)
    {
            //cout<<"matrix"<<"["<<i<<"]"<<" "<<"["<<j<<"] :";
            d[i]=p[i].size();
            //cout<<p[i][j]<<" ";
        //cout<<"\n";
    }
     for(int i=0;i<n;i++)
    {
        cout<<i<<" degree = "<<d[i]<<"\n";
    }
}
void graph_list(vector<int>p[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<"-->";
        for(int j=0;j<p[i].size();j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    //vector<int>m[7];
    vector<int> *m=new vector<int> [node];
    //    int **m=new int*[node];
 

    int u,v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        m[u].push_back(v);
        m[v].push_back(u);
    }

    graph_list(m,node);
    countDegree(m,node);
}
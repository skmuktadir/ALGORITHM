#include <bits/stdc++.h>
using namespace std;

int **matrix(int r,int c)
{
    int **matrix=new int *[r];
    {
        int **m =new int *[r];

        for(int i=0;i<c;i++)
        {
            m[i]=new int [c];
        }
    
    //srand(time(0));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            m[i][j]=rand()%10;
        }
    }
    return m;
}
}
void PrintMatrix(int **m , int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<m[i][j]<<" ";
            

        }
        cout<<" "<<"\n";

    }
}

int main()
{
    srand(time(0));
    int **A=matrix(3,3);
   // addValue(A,5,5);
    int **B=matrix(3,3);
   // addValue(B,5,5);
    PrintMatrix(B,3,3);


}
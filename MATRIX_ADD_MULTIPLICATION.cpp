#include<bits/stdc++.h>
using namespace std;
void matrix(int size,int a[3][3],int size2,int b[3][3])
{
    int sum=0;
    //int matX[size][size]; 
    //int matX2[size2][size2];
    cout<<"MATRIX ADDITION (3 BY 3)"<<"\n";
    for(int i=0;i<size;i++)
    {
            cout<<"\n";

        for(int j=0;j<size;j++)
        {
            //matX[i][j]=a[j];
            cout<<a[i][j]+b[i][j]<<" ";// 2D matrix addition

           // cout<<b[i][j];

            //matX2[i][j]=b[j];
        }
    }
        cout<<"\n";
        cout<<"\n"<<"MATRIX MULTIPLICATION (3 by 3)"<<"\n"<<"\n";
    for(int i=0;i<size;i++)
    { 
        int test=3;
        int k=0;
        //cout<<"\n";
        while(test!=0)
        { 
            for(int j=0;j<size2;j++)
            {            
                sum=sum+(a[i][j]*b[j][k]);
                cout<<"a ["<<i<<"] "<<"["<<j<<"] = "<<a[i][j]<<";  * b ["<<j<<"] "<<"["<<k<<"] = "<<b[j][k]<<"; += "<<sum<<"\n";
                //cout<<"b ["<<j<<"] "<<"["<<k<<"] = "<<b[j][k]<<" "<<"\n";
               
            }
            k++;
            cout<<"\n";
            cout<<" SUM = "<<sum<<" "<<" \t"<<"\n"<<"\n";
            //return sum;
            sum=0;
            test--;
            
        }    
    }
}
/*int matrix2(int b[],int size)
{
    int matX2[size];
}
int printMatrix(int[],int[])
{
    
}*/
int main()
{
    /*int a[0][0]=1;
    int a[0][1]=1;
    int a[1][0]=1;
    int a[1][1]=1; */
    int a[3][3]={12,8,4,3,17,14,9,8,10};

    /*int b[0][0]=1;
    int b[0][1]=1;
    int b[1][0]=1;
    int b[1][1]=1;  */
    int b[3][3]={5,19,3,6,15,9,7,8,16};

    //int b[][]={6,5,1,2};
    matrix(3,a,3,b);
    //cout<<x;


}
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *p,int n )
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            if(p[i]>p[i+1])
            {
                swap(p[i],p[i+1]);
            }
        }
    }
}
void insertionSort(int *p,int n )
{
    int i,key,j;
    for(int i=1;i<n;i++)
    {
        key=p[i];
        j=i-1;
        while(j>=0 && p[j]>key)
        {
            p[j+1]=p[j];
            j=j-1;
        }
        p[j+1]=key;
    }
}

void printList(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<"\n";
    }
}
int main()
{
    int test=10;
    //int test;
    int n=100;
        //cin>>n;
        int *A =new int [n];
    
    while(test!=1000000)
    {
        srand(time(0));
        for(int i=0;i<n;i++)
        {
            A[i]=rand()%1000;
        }
        //printList(A,n);
        //bubbleSort(A,n);
        //cout<<".........."<<"\n";
        //printList(A,n);
        //cout<<".........."<<"\n";
        //printList(A,n);



        
    auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        /*  ..........Change your algorithm...............*/
        //int *m = bubbleSort(A,n);
        //int *i=  insertionSort(A,n);
       // bubbleSort()
       cout<<"bubbleSort(A,n);"<<"\n";
        bubbleSort(A,n);
        //cout<<"insertionSort(A,n);"<<"\n";
        //insertionSort(A,n);



        /* .......................................  */


        /*.....................Time taken by 1st Algorithm........................*/
        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
            time_taken1 *= 1e-9;
        cout << "Time taken by program is : " << fixed
            << time_taken1 << setprecision(9);
        cout << " sec" << endl;
        test=test*10;
        //int *A=new int[n];
        //generate random number
    }
}
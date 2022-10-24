#include<bits/stdc++.h>
using namespace std;
void linear_search(int x[1000],int num);//prototype function;
int main()
{
    freopen("100_random.txt","r",stdin);//freopen means (file re open)// it's structure is (freopen("name of this text file","r/w",stdin/stdout))//(r/w=read, write)//(stdin or stdout means standard input) or (stdout means
    int array[1000];
    //cout<<"This number is gen"
    for(int i=0;i<1000;i++)
    {
        cin>>array[i];
        cout<<array[i]<<" ";
    }
    //swap
    auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        /*  ..........Change your algorithm...............*/
        //int *m = bubbleSort(A,n);
        //int *i=  insertionSort(A,n);
       // bubbleSort()
       //cout<<"bubbleSort(A,n);"<<"\n";
        //bubbleSort(A,n);
        //cout<<"insertionSort(A,n);"<<"\n";
        //insertionSort(A,n);
        linear_search(array,28);




        /* .......................................  */


        /*.....................Time taken by 1st Algorithm........................*/
        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
            time_taken1 *= 1e-9;
        cout << "Time taken by program is : " << fixed
            << time_taken1 << setprecision(9);
        cout << " sec" << endl;
}





void linear_search(int x[1000],int num)
{
    int n=num;
    //bubble short
    for ( int i=0;i<=998;i++)
    {
         for ( int i=1;i<=999;i++)
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
    for(int i=0;i<1000;i++)
    {
        cout<<x[i]<<"\n";
    }
    //linear search
    cout<<" "<<"\n";
    for(int i=0;i<1000;i++)
    {
        if(x[i]==n)
        {
            cout<<"THE number is founded and this number is "<<x[i];
        }
        
    }
}
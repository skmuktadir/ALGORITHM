#include<bits/stdc++.h>
//#include <initializer_list>
using namespace std;
int fun1(int a,int b)
{
    cout<<"In out of main function address of 'a' local variable is = "<<&a<<"\n";
    //cout<<"In out of main function address of 'b' local variable is = "<<&b<<"\n"<<"\n";

    return a+b;
}
int fun2(int a,int b)
{
    cout<<"In out of main function address of 'a' local variable is = "<<&a<<"\n";
    //cout<<"In out of main function address of 'b' local variable is = "<<&b<<"\n"<<"\n";

    return a+b;
}
int *hello(int * x,int * num)
{
    cout<<"In out of main function address of '&x' local variable is = "<<& x<<"\n";
    cout<<"In out of main function address of 'x' local variable is = "<< x<<"\n";
    cout<<"In main function address of '*x' variable is = "<<*x<<"\n";

    cout<<"In out of main function address of '*num' local variable is = "<<* num<<"\n";
    //cout<<"In out of main function address of 'x' local variable is = "<< num<<"\n";
    //int sum = (*(x))+(*(num));
    int *p=(int*)malloc(sizeof(int));//this p create a memory from heap memory
    //int *p = new int [s];
    *p=(*x)+(*num);
    //cout<<"Pointer function Sum ="<<sum<<"\n";
    return p;
}
int main()
{
    int a=1;
    int b=2;
    cout<<"In main function address of 'a' variable is = "<<&a<<"\n";
    //cout<<"In main function address of 'a' variable is = "<<&a<<"\n";

    //int sum=fun1(1,2);
    //int sum2=fun2(1,2);
   // int *sum3=hello(& a,& b);
    //cout<<"sum ="<<sum<<"\n";
    //cout<<"*sum3 ="<<*sum3<<"\n";


auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        /*  ..........Change your algorithm...............*/
        //int *m = bubbleSort(A,n);
        //int *i=  insertionSort(A,n);
        int *sum3=hello(& a,& b);
        int sum2=fun2(1,2);


        /* .......................................  */


        /*.....................Time taken by 1st Algorithm........................*/
        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
            time_taken1 *= 1e-9;
        cout << "Time taken by program is : " << fixed
            << time_taken1 << setprecision(9);
        cout << " sec" << endl;
        //test=test*10;
        //int *A=new int[n];
        //generate random number
}
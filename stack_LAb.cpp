# include<bits/stdc++.h>
    using namespace std;
    class student{
    private:
        int id;
        string name;
        double cgpa;
    public:
        
        student (int id)
        {
            this->id=id;
            //this->name=name;
            //this-> cgpa=cgpa;
        }
        int getId(){
        return id;
        }
        };
    int main()
    {
        int ran;
        cout<<"Input number of random numbers: ";
        cin>>ran;

        /*stack<student>studetstack;
        freopen("cgpa.txt","r" , stdin);
        int idd;
        string nname;
        double ccgpa;
        */
        vector<student>studetstack;

        freopen("100000_random.txt","r" , stdin);
        int idd;
        string nname;
        double ccgpa;

        for(int i=0;i<ran;i++)
        {
            cin>>idd;
            student s(idd);
            studetstack.push_back(s);
        }
        /*for(int i=0;i<3;i++)
        {
            cin>>idd>>nname>>ccgpa;
            student s(idd,nname,ccgpa);
            studetstack.push(s);
        }*/
        for(int i=0;i<ran;i++)
        {
            cout<<studetstack[i].getId()<<" ";
            //cout<<studetstack[i].getname()<<" ";
           // cout<<studetstack[i].getCgpa()<<" ";
             //studetstack.pop();
             cout<<endl;        }
       /* while(!studetstack.empty()){
            cout<<studetstack.top().getId()<<" ";
            cout<<studetstack.top().getname()<<" ";
            cout<<studetstack.top().getCgpa()<<" ";
             studetstack.pop();
             cout<<endl;

        }*/
        /*namestack.push("Hello");
        namestack.push("Shanzid");
        for(int i=0;i<2;i++)
        {

            cout<<namestack[i]<<"\n";
        }*/


    }

//dynamic Polymorphism
#include<iostream>
using namespace std;
class box{
    protected:
        int l,w,h;
    public:
        void input(int x, int y, int z){
            l=x;w=y;h=z;
        }
        void disp()
        {
            cout<<"l : "<<l<<endl<<"W : "<<w<<endl<<"h : "<<h<<endl;
        }
};
class derived:public box{
    protected:
        int wt;
    public:
        void input(int x, int y, int z,int t)
        {
            l=x;w=y;h=z;wt=t;
        }
         void disp()
        {
            cout<<"l : "<<l<<endl<<"W : "<<w<<endl<<"h : "<<h<<endl<<"wt : "<<wt<<endl;
        }
};
void example1(box box_obj)
{
    box_obj.disp();
}
void example2(derived derived_obj)
{
    derived_obj.disp();
}
void example3(box &box_ref)
{
    box_ref.disp();
}
int main()
{
    box obj1;
    derived obj2;
    //compile Time Binding
    cout<<"Compile time binding"<<endl;
    obj1.input(10,20,30);
    obj1.disp();
    obj2.input(40,50,60,70);
    obj2.disp();
    //Runtime Time Binding
     cout<<"Run time binding"<<endl;
     box& ref1=obj1;
     derived& ref2=obj2;
     ref1.disp();
     ref2.disp();
     cout<<"Example1"<<endl;
     example1(obj1);
     cout<<"Example2"<<endl;
     example2(obj2);
     //we cannot pass different obj in dfferent function
     //example1(obj2)
     //example2(obj1)
     //but we can do it with use of reference as example3
     cout<<"Example3"<<endl;
     example3(obj1);
     example3(obj2);//but as it is of base reference so it will call base display for both
}

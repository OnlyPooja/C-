//constructor chaining
#include<iostream>
using namespace std;
class box{
    protected:
        int l,w,h;
    public:
        box(int x1,int x2,int x3)
        {
            l=x1;
            w=x2;
            h=x3;
        }
        void disp()
        {
            cout<<"Length: "<<l<<endl<<"Weidth: "<<w<<endl<<"Height: "<<h<<endl;
        }
};
class derived_box:public box{
    protected:
        int wt;
    public:
        derived_box(int x1,int x2,int x3,int x4):box(x1,x2,x3)
        {
            wt=x4;
        }
        void disp()
        {
            cout<<"Length: "<<l<<endl<<"Weidth: "<<w<<endl<<"Height: "<<h<<endl<<"Weight: "<<wt<<endl;
        }
};
int main()
{
    box obj1(1,2,3);
    obj1.disp();
    derived_box obj2(8,9,10,4);
    obj2.disp();
}
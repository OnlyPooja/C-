//pgm to show inheritence , type of fun,fun hiding
#include<iostream>
using namespace std;
class box{
    protected:
        int l,w,h;
    public:
        void input(int x1, int x2, int x3){
            l=x1;
            w=x2;
            h=x3;
        }
        void disp(){
            cout<<"Value of l,w and h is : "<<l<<" "<<w<<" "<<h<<endl;
        }
        void vol(){
            cout<<"Volume : "<<l*w*h<<endl;
        }
};
class box1:public box{
    protected:
        int wt;
    public:
        void input(int x1, int x2, int x3, int x4)
        {
            l=x1;
            w=x2;
            h=x3;
            wt=x4;
        }
        void disp()
        {
            cout<<"Value of l,w h and wt is : "<<l<<" "<<w<<" "<<h<<" "<<wt<<endl;
        }
        void density(){
            cout<<"density : "<<(wt*0.1)/l*w*h<<endl;
        }
};
int main()
{
    box1 obj;
    obj.box::input(10,20,30);
    obj.box::disp();
    obj.vol();
    obj.input(5,10,20,30);
    obj.disp();
    obj.vol();
    obj.density();
}
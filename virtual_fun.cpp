//all about reference and virtual function
#include<iostream>
using namespace std;
class box{
    protected:
        int l,w,h;
    public:
    	
    	
        void input(int x, int y, int z)
        {
            l=x;w=y;h=z;
        }
         void disp()//use here virtual keyword so that you can call base function using base reference which is pointing to derived object
        {
            cout<<"l : "<<l<<endl<<"W : "<<w<<endl<<"h : "<<h<<endl;
        }
        void vol()
        {
            cout<<"vol : "<<l*w*h<<endl;
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
        void density()
        {
            cout<<"density : "<<(0.1)*wt/l*w*h<<endl;
        }
};
int main()
{
    box obj1;
    box& box_ref=obj1;//base reference to base object
    cout<<"Base reference base object"<<endl;
    box_ref.input(1,2,3);
    box_ref.disp();
    box_ref.vol();
    // box_ref.derived::input(1,2,3,4); but we cannot call derived class funtion using base reference and object(derive is not a base of box)
    //box_ref.derived::disp();
    // box_ref.derived::density();
    cout<<"......................................."<<endl;
    cout<<"derived reference to base object"<<endl;
    derived obj2;
    derived& derived_ref=obj2;//derived reference to drived object
    derived_ref.input(1,2,3,4);
    derived_ref.disp();
    derived_ref.density();
    
    //we can also call base funtion by derived reference as
    cout<<"Using derived obj to base function"<<endl;
    derived_ref.box::input(11,2,3);
    derived_ref.box::disp();
    derived_ref.box::vol();
    cout<<"......................................."<<endl;
    cout<<"Base reference to derived object"<<endl;
    //Base reference can only call the base function in the derived object
    //virtual function allow base reference to call derived function
    derived obj3;
    box& box_reff=obj3;//base reference to derived object,
    box_reff.input(1,2,3);
    box_reff.disp();//if we use virtual in line 11 then it will print the display of derived class;
    box_reff.vol();
    // cout<<"......................................."<<endl;
    // cout<<"Derived reference base object"<<endl;
    // box obj4;
    // derived& box_refff=obj4;
    // box_refff.input(1,2,3,4);                 // it will show an error because derived reference cannot be point to base object
    // box_refff.disp();
    // box_refff.density();
    // box_refff.vol();

}

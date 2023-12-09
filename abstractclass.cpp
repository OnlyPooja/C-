#include<iostream>
using namespace std;
class shape{
    protected:
        int l,w,h;
    public:
        void input()
        {
            cout<<"Enter value of L,W and H"<<endl;
            cin>>l>>w>>h;
        }
        virtual void area()=0;//undefine function created using pure virtual function
};
//We must have to use this area function in the derived classes else it will show error;
class box:public shape{
    public:
        void area()
        {
            cout<<"Area of box: "<<2*(l*w+w*h+h*l)<<endl;
        }
};
class rectangle:public shape{
    public:
        void area()
        {
            cout<<"Area of rectangle: "<<(l*w)<<endl;
        }
};
int main()
{
    //we cannot create object of abstract class(because of pure virtual function)
    // shape obj1;
    // obj1.input();
    box obj1;
    obj1.input();
    obj1.area();
    rectangle obj2;
    obj2.input();
    obj2.area();
}
#include<iostream>
using namespace std;
class triangle
{
    public:
        float a,b,c,ar,per;
        void input();
        void area();
        void perimeter();
        void display();
};
void triangle::input()
{
    cout<<"Enter Length : ";
    cin>>a;
    cout<<"Enter width : ";
    cin>>b;
    cout<<"Enter height : ";
    cin>>c;
}
void triangle::perimeter()
{
    per=a+b+c;
}
void triangle::area()
{
    ar=0.5*(b*c);
}
void triangle::display()
{
    cout<<"length (cm): "<<a<<endl;
    cout<<"width (cm): "<<b<<endl;
    cout<<"Height (cm): "<<c<<endl;
    cout<<"perimeter : "<<per<<endl;
    cout<<"Area : "<<ar<<endl;
}
int main()
{
    triangle obj1;
    obj1.input();
    obj1.perimeter();
    obj1.area();
    obj1.display();
}
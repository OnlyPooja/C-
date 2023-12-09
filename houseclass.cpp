#include<iostream>
using namespace std;
class house{
    public:
        string ownr;
        int l,b,h;
        void display();
        void Area();
        void volume();
};
void house::display()
{
    cout<<"Owner name : "<<ownr<<" "<<"Dimensions : "<<l<<b<<h<<endl;; 
}
void house::Area()
{
    cout<<2*(l*b+b*h+h*l)<<endl;;
}
void house::volume()
{
    cout<<l*b*h<<endl;
}
int main()
{
    house h1,h2;
    cout<<"Details of house 1 : "<<endl;
    cout<<"owner name : ";
    getline(cin,h1.ownr);
    cout<<"Dimensions : ";
    cin>>h1.l>>h1.b>>h1.h;
    cout<<"Details of house 2 : "<<endl;
    cout<<"owner name : ";
    getline(cin,h2.ownr);
    getline(cin,h2.ownr);
    cout<<"Dimensions : ";
    cin>>h2.l>>h2.b>>h2.h;
    cout<<"Details of house 1 is : "<<endl;
    h1.display();
    cout<<"Details of house 2 is : "<<endl;
    h2.display();
    cout<<"Area of house 1 is : "<<endl;
    h1.Area();
    cout<<"Area of house 2 is : "<<endl;
    h2.Area();
    cout<<"volume of house 1 is : "<<endl;
    h1.volume();
    cout<<"volume of house 2 is : "<<endl;
    h2.volume();
    return 0;

}
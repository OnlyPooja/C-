//constructor chaining
#include<iostream>
using namespace std;
class base{
    public:
        base()
        {
            cout<<"Base constructor"<<endl;
        }
        ~base()
        {
            cout<<"Base Distructor"<<endl;
        }
    };
class derived1:public base{
    public:
        derived1()
        {
            cout<<"derived1 constructor"<<endl;
        }
        ~derived1()
        {
            cout<<"derived1 Distructor"<<endl;
        }
};
class derived2:public derived1{
    public:
        derived2()
        {
            cout<<"derived2 constructor"<<endl;
        }
        ~derived2()
        {
            cout<<"derived2 Distructor"<<endl;
        }
};
int main()
{
    base obj1;
    derived1 obj2;
    derived2 obj3;
}
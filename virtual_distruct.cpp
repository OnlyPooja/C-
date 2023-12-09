#include<iostream>
using namespace std;
class base{
    public:
        virtual~base(){
            cout<<"Base destructor"<<endl;
        }
};
class derived1:public base{
    public:
        ~derived1(){
            cout<<"Deriverd Destructor"<<endl;
        }
};

int main()
{
    //static object(All destructors are called)
    base obj1;
    derived1 obj2;
    // derived1* d1_ptr=&obj2;                 //we cannot delete the static variable using delete 
    // delete d1_ptr;
    //dynamic object(No destructor is called)
    base* base_ptr1 =new base;
    derived1* derived_ptr1=new derived1;
    base* base_ptr2=new derived1;
    //dynamic objects destroied using delete(it will show undefine behaviour ) to overcome this we will use virtual keyword in base destructor
    base* base_ptr3 =new base;
    delete base_ptr3;
    derived1* derived_ptr2=new derived1;
    delete derived_ptr2;
    base* base_ptr4=new derived1;
    delete base_ptr4;

}

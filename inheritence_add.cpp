//program is to show inheritence(multi - level)
#include<iostream>
using namespace std;
class add
{
    protected:
        int a,b;
    public:
        void input(){
            cout<<"Enter the value of a and b : ";
            cin>>a>>b;
        }
        void disp(){
            cout<<"Value of a and b is "<<a<<b<<endl;
        }
        void sum(){
            cout<<"Addition : "<<a+b<<endl;
        }
};
class add_sub:public add{
    public:
        void sub(){
            cout<<"Substraction: "<<a-b<<endl;
    }
};
class add_sub_mul:public add_sub{
    public:
        void mul(){
            cout<<"Multiplication: "<<a*b<<endl;
    }
};
class add_sub_mul_div:public add_sub_mul{
    public:
        void div(){
            cout<<"Division: "<<a/b<<endl;
    }
};
int main()
{
    add_sub_mul_div obj;
    obj.input();
    obj.sum();
    obj.sub();
    obj.mul();
    obj.div();

}
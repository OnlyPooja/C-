// Diamond problem;
// #include<iostream>
// using namespace std;
// class A{
//     protected:
//         int x;
//     public:
//         void input()
//         {
//             cout<<"Enter value of x : ";
//             cin>>x;
//         }
//         void disp()
//         {
//             cout<<"value of x : "<<x<<endl;
//         }
// };
// class B:public A{};
// class C:public A{};
// class D:public A , public C{
//     public:
//         void inc_by_10()
//         {
//             cout<<x+10;
//         }
// };
// int main()
// {
//     D obj;
//     obj.input();
//     obj.inc_by_10();
// }
//Solution 1 by virtual keyword;
// #include<iostream>
// using namespace std;
// class A{
//     protected:
//         int x;
//     public:
//         void input()
//         {
//             cout<<"Enter value of x : ";
//             cin>>x;
//         }
//         void disp()
//         {
//             cout<<"value of x : "<<x<<endl;
//         }
// };
// class B:public virtual A{};
// class C:public virtual A{};
// class D:public virtual A,public C{
//     public:
//         void inc_by_10()
//         {
//             cout<<x+10;
//         }
// };
// int main()
// {
//     D obj;
//     obj.input();
//     obj.inc_by_10();
// }
//solution 2 by scope resolution operator
#include<iostream>
using namespace std;
class A{
    protected:
        int x;
    public:
        void input()
        {
            cout<<"Enter value of x : ";
            cin>>x;
        }
        void disp()
        {
            cout<<"value of x : "<<x<<endl;
        }
};
class B:public A{};
class C:public A{};
class D:public C,public A{
    public:
        void inc_by_10()
        {
            cout<<C::x+10;
        }
};
int main()
{
    D obj;
    obj.C::input();
    obj.inc_by_10();
}
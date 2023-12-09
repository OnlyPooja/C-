// //copy constructor(Shallow Copy)
// #include<iostream>
// using namespace std;
// class box{
//     private:
//         int l,w,h;
//     public:
//         void disp();
//         box(){//non parameterised constructor
//             l=1;
//             w=2;
//             h=5;
//         }
//         box(int x,int y, int z)//parameterised constructor
//         {
//             l=x;
//             w=y;
//             h=z;
//         }
//         box(box &po)//copy constructor(which copy one object into another)
//         {
//             l=po.l;
//             w=po.w;
//             h=po.h;
//         }
// };
// void box::disp(){
//     cout<<l<<" "<<w<<" "<<h<<endl;
// }
// int main()
// {
//     box obj1;//non parameterised constructor
//     obj1.disp();
//     box obj2(50,60,70);// parameterised constructor
//     obj2.disp();
//     box obj3(obj2);//copy constructor
//     obj3.disp();
// }
//copy constructor(Deep Copy)
#include<iostream>
using namespace std;
class box{
    private:
        int *l,*w,*h;
    public:
        void disp();
        box(){//non parameterised constructor

            l=new int;
            w=new int;
            h=new int;
            *l=1;
            *w=2;
            *h=5;
        }
        box(int x,int y, int z)//parameterised constructor
        {
            l=new int;
            w=new int;
            h=new int;
            *l=x;
            *w=y;
            *h=z;
        }
        box(box &po)//copy constructor(which copy one object int another)
        {
            l=new int;
            w=new int;
            h=new int;
            *l=*(po.l);
            *w=*(po.w);
            *h=*(po.h);
        }
};
void box::disp(){
    cout<<*l<<" "<<*w<<" "<<*h<<endl;
}
int main()
{
    box obj1;//non parameterised constructor
    obj1.disp();
    box obj2(50,60,70);// parameterised constructor
    obj2.disp();
    box obj3(obj2);//copy constructor
    obj3.disp();
}
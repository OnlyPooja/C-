
//Adding objects ,using object passing
#include<iostream>
using namespace std;
class weight{
    private:
        int kg,g;
    public:
        void input();
        void disp();
        weight addobj(weight po);
        weight maxobj(weight po);
        void copyobj(weight po);
        weight preinc();
        weight postinc();
};
void weight::input(){
    cout<<"Enter kg :";
    cin>>kg;
    cout<<"Enter gram(g): ";
    cin>>g;
}
void weight::disp()
{
    cout<<"Kg : "<<kg<<endl<<"Gram(g) : "<<g<<endl;
    cout<<"...................................................."<<endl;

}
weight weight::addobj(weight po)
{
    weight temp;
    temp.kg=kg+po.kg;
    temp.g=g+po.g;
    return temp;
}
weight weight::maxobj(weight po)
{
    weight temp;
    if(kg>po.kg)
    {
        temp.kg=kg;
        temp.g=g;
    }
    else
    {
        temp.kg=po.kg;
        temp.g=po.g;
    }
    return temp;
}
void weight::copyobj(weight po)
{
    kg=po.kg;
    g=po.g;
}
weight weight::preinc()
{
    weight temp;
    temp.kg=++kg;
    temp.g=++g;
    return temp;
}
weight weight::postinc()
{
    weight temp;
    temp.kg=kg++;
    temp.g=g++;
    return temp;
}
int main()
{
    weight ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    cout << "Object 1" <<endl;
    ob1.disp();
    cout << "Object 2" <<endl;
    ob2.disp();
    ob3=ob1.addobj(ob2);
    cout << "Object 3 (Adding)" <<endl;
    ob3.disp();
    ob3=ob1.maxobj(ob2);
    cout << "Object 3 (Maximum)" <<endl;
    ob3.disp();
    ob3.copyobj(ob1);
    cout << "Object 3 (copy of obj1)" <<endl;
    ob3.disp();
    ob3.copyobj(ob2);
    cout << "Object 3 (copy of obj2)" <<endl;
    ob3.disp();
    ob3=ob1.preinc();
    cout << "Object 3 (Preincrement obj1)" <<endl;
    ob3.disp();
    ob3=ob1.postinc();
    cout << "Object 3 (Postimcrement obj1)" <<endl;
    ob3.disp();
    ob3=ob2.preinc();
    cout << "Object 3 (Preincrement obj2)" <<endl;
    ob3.disp();
    ob3=ob2.postinc();
    cout << "Object 3 (Postimcrement obj2)" <<endl;
    ob3.disp();

}


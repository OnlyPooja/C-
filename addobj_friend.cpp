//Adding objects using operator overloading;
#include<iostream>
using namespace std;
class weight{
	        	public:
			int kg,g;
			void input();
        	void disp();
		    friend weight operator+(weight co,weight po);
			friend weight operator++(weight po);
			friend weight operator++(weight po,int x);
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
weight operator+(weight po,weight co)
{
	weight temp;
	temp.kg=co.kg+po.kg;
	temp.g=co.g+po.g;
	return temp;
}
//weight operator=(weight po,weight co)
//{
//	co.kg=po.kg;
//	co.g=po.g;
//	return *this;
//}
weight operator++(weight po)
{
	weight temp;
	temp.kg=++po.kg;
	temp.g=++po.g;
	return temp;
}
weight operator++(weight po,int x)
{
	weight temp;
	temp.kg=po.kg++;
	temp.g=po.g++;
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
    ob3=operator+(ob1,ob2);
    cout << "Object 3 (Adding)" <<endl;
    ob3.disp();
    ob3=ob2=ob1;
    cout << "Object 3 (Equal)" <<endl;
    ob3.disp();
    ob3=++ob1;
    cout << "Object 3 (Preincrement obj1)" <<endl;
    ob3.disp();
    ob3=ob1++;
    cout << "Object 3 (Postimcrement obj1)" <<endl;
    ob3.disp();
    

}

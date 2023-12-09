//Adding objects using operator overloading;
#include<iostream>
using namespace std;
class weight{
		private:
			int kg,g;
		public:
			void input();
        	void disp(
			);
			weight operator+(weight po);
			weight operator=(weight po);
			weight operator++();
			weight operator++(int x);
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
weight weight::operator+(weight po)
{
	weight temp;
	temp.kg=kg+po.kg;
	temp.g=g+po.g;
	return temp;
}
weight weight::operator=(weight po)
{
	kg=po.kg;
	g=po.g;
	return *this;
}
weight weight::operator++()
{
	weight temp;
	temp.kg=++kg;
	temp.g=++g;
	return temp;
}
weight weight::operator++(int x)
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
    ob3=ob1+ob2;
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

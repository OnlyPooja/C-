#include<iostream>
using namespace std;
class box1;
class box{
	private:
		int l,w,h;
	public:
		void input();
		friend void fun(box po1,box1 po2);

};
class box1{
	private:
		int l,w,h;
	public:
		void input();
		friend void fun(box po,box1 po2);

};
void fun(box po,box1 po2)
{
	cout<<"Length,Weidth,Hight : "<<po.l+po2.l<<" "<<po.w+po2.w<<" "<<po.h+po2.h<<endl;
}
void box::input()
{
	cout<<"Length,Weidth,Hight : ";
	cin>>l>>w>>h;
}
void box1::input()
{
	cout<<"Length,Weidth,Hight : ";
	cin>>l>>w>>h;
}
int main()
{
	box ob1;
	box1 obj1;
	ob1.input();
	obj1.input();
	fun(ob1,obj1);
}


// //Adding objects ,using friend function
// #include<iostream>
// using namespace std;
// class weight{
//     private:
//         int kg,g;
//     public:
//         void input();
//         void disp();
//         friend weight addobj(weight po,weight po1);
       
// };
// void weight::input(){
//     cout<<"Enter kg :";
//     cin>>kg;
//     cout<<"Enter gram(g): ";
//     cin>>g;
// }
// void weight::disp()
// {
//     cout<<"Kg : "<<kg<<endl<<"Gram(g) : "<<g<<endl;
//     cout<<"...................................................."<<endl;

// }
// weight addobj(weight po, weight po1)
// {
//     weight temp;
//     temp.kg=po.kg+po1.kg;
//     temp.g=po.g+po1.g;
//     return temp;
// }

// int main()
// {
//     weight ob1,ob2,ob3;
//     ob1.input();
//     ob2.input();
//     cout << "Object 1" <<endl;
//     ob1.disp();
//     cout << "Object 2" <<endl;
//     ob2.disp();
//    ob3=addobj(ob1,ob2);
//     cout<<"object 3 (Addition)"<<endl;
// 	ob3.disp();
// }


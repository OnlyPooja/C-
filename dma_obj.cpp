// //Pointer to object 
// #include<iostream>
// using namespace std;
// class student{
// 	private:
// 		string name;
// 		int rn;
// 	public:
// 		inline void input();
// 		inline void disp();
// };
// inline void student::input()
// {
// 	cout<<"Enter name and roll_no : ";
// 	getline(cin,name);
// 	cin>>rn;
// 	cin.ignore();
// }
// inline void student::disp()
// {
// 	cout<<"Name : "<<name<<endl<<"Roll_no : "<<rn<<endl;
// }
// int main()
// {
// 	student obj;
// 	student* p;
// 	p=&obj;
// 	p->input();
// 	p->disp();
// }
// Dynamic object
#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int rn;
	public:
		inline void input();
		inline void disp();
};
inline void student::input()
{
	cout<<"Enter name and roll_no : ";
	getline(cin,name);
	cin>>rn;
	cin.ignore();
}
inline void student::disp()
{
	cout<<"Name : "<<name<<endl<<"Roll_no : "<<rn<<endl;
}
int main()
{
	int n;
	cout<<"Enter number of student : ";
	cin>>n;
	student* p=new student[n];
	student*d=p;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		p->input();
		p++;
	}
	for(int i=0;i<n;i++)
	{
		d->disp();
		d++;
	}

	return 0;
}

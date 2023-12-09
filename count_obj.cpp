#include<iostream>
using namespace std;
class student{
    private:
        string name;
        int rn,eng,hin;
        static int count;
	public:
		void input();
		void display();
		student();
		~student();
		
};
void student::input()
{
	getline(cin,name);
	cin>>rn>>hin>>eng;
	cin.ignore();
}
void student::display()
{
		cout<<name<<endl;
		cout<<rn<<endl;
		cout<<hin<<endl;
		cout<<eng<<endl;
}
student::student()
{
    count++;
	cout<<"obj is created,count ="<<count<<endl;
}
student::~student()
{
   
	count--;
	cout<<"obj is destroyed,count ="<<count<<endl;
}
		
int student::count=0;
int main()
{
	student obj1,obj2,obj3;
	obj1.input();
	obj2.input();
	obj3.input();
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}
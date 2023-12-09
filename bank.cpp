#include<iostream>
using namespace std;
class student{
	string name;
	int ac_no;
	int bal;
	public:
		void input();
		void disp();
		void deposit();
		void withdraw();
};
void student::input()
{
	cout<<"Enter name: ";
	getline(cin,name);
	cout<<"Enter ac_no : ";
	cin>>ac_no;
	cout<<"Enter Balance : ";
	cin>>bal;
}
void student::disp()
{
	cout<<"Name : "<<name<<endl<<"Account No: "<<ac_no<<endl<<"Balance: "<<bal<<endl;
	
}
void student::deposit()
{
	bal=bal+5000;
}
void student::withdraw()
{
	int wd;
	cout<<"Enter Amount to Withdrawal : ";
	cin>>wd;
	cin.ignore();
	if(wd>bal or wd<0)
	{
		cout<<"Invalid Amount"<<endl;
	}
	else
	{
		cout<<"Withdrawal Successful"<<endl;
		bal-=wd;
	}
}
int main()
{
	student person[2];
	for(int i=0;i<2;i++)
	{
		person[i].input();
		person[i].deposit();
		person[i].disp();
		person[i].withdraw();
		person[i].disp();

	}
}
//Call by Value and address and reference
#include<iostream>
using namespace std;
void swap1(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void swap2(int *x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void swap3(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a=10,b=20;
	swap1(a,b);
	cout<<"a : "<<a<<" "<<"b : "<<b<<endl;
	swap2(&a,&b);
	cout<<"a : "<<a<<" "<<"b : "<<b<<endl;
	swap3(a,b);
	cout<<"a : "<<a<<" "<<"b : "<<b<<endl;
}
#include<iostream>
using namespace std;
class Cadidates{
    private:
        long Rno;
        string Cname;
        float Age_marks;
        char Grade;
        void setGrade();
    public:  
        Cadidates(int r,string m,int agmk);
        void Getdata();
        void disp_Result();
};
Cadidates::Cadidates(int r,string nm,int agmk)
{
    Rno=r;
    Cname=nm;
    Age_marks=agmk;
}
void Cadidates::Getdata()
{
    cout<<"Enter Roll_no : ";
    cin>>Rno;
    cout<<"Enter Name : ";
    cin.ignore();
    getline(cin,Cname);
    cout<<"Enter Aggregate Marks : ";
    cin>>Age_marks;
    setGrade();
}
void Cadidates::setGrade()
{
   if(Age_marks<50)
	Grade='D';
    else if(Age_marks>=50 && Age_marks<65)
    Grade='C';
    else if(Age_marks>=65 && Age_marks<80)
    Grade='B';
    else
    Grade='A';
}
void Cadidates::disp_Result()
{
	cout<<"Roll_no : "<<Rno<<endl;
    cout<<"Name : "<<Cname<<endl;
    cout<<"Aggregate Marks :"<<Age_marks<<endl;
    cout<<"Grade : "<<Grade<<endl;
}
int main()
{
	
	Cadidates cd1(0,"N.A",0.0);
    cd1.Getdata();
	cd1.disp_Result();
}

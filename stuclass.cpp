#include<iostream>
using namespace std;
class student {
    public:
        string name;
        int m1,m2,crn;
        void display();
};
void student::display()
{

    cout<<name<<" "<<crn<<" "<<m1<<" "<<m2<<endl;
    
}
int main()
{
    student stu1,stu2;
    cout<<"Enter details of first student : "<<endl;
    cout<<"Name : ";
    getline(cin,stu1.name);
    cout<<"Roll-no : ";
    cin>>stu1.crn;
    cout<<"Two subject marks : ";
    cin>>stu1.m1>>stu1.m2;
    cout<<"Enter details of second student : "<<endl;
    cout<<"Name : ";
    getline(cin,stu2.name);
    getline(cin,stu2.name);
    cout<<"Roll-no : ";
    cin>>stu2.crn;
    cout<<"Two subject marks : ";
    cin>>stu2.m1>>stu2.m2;
    cout<<"Details of first student is :"<<endl;
    stu1.display();
    cout<<"Details of second student is :"<<endl;
    stu2.display();
    cout<<"Total marks obtain by first student is : "<<stu1.m1+stu1.m2<<endl;
    cout<<"Total marks obtain by second student is : "<<stu2.m1+stu2.m2<<endl;
    return 0;


}
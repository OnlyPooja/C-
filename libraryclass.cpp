#include<iostream>
using namespace std;
class library{
    public:
        string title , author;
        int quan;
        void display();
};
void library::display()
{
    cout<<"Title : "<<title<<endl;
    cout<<"Author : "<<author<<endl;
    cout<<"Quantity : "<<quan<<endl;
}
int main()
{
    library l1,l2;
    cout<<"Enter Details of first book : "<<endl;
    cout<<"Title : ";
    getline(cin,l1.title);
    cout<<"Author : ";
    getline(cin,l1.author);
    cout<<"Quantity : ";
    cin>>l1.quan;
    cout<<"Enter Details of second book : "<<endl;
    cout<<"Title : ";
    getline(cin,l2.title);
    getline(cin,l2.title);
    cout<<"Author : ";
    getline(cin,l2.author);
    cout<<"Quantity : ";
    cin>>l2.quan;
    cout<<"Details of first book is : "<<endl;
    l1.display();
    cout<<"Details of second book is : "<<endl;
    l2.display();
    l1.quan+=5;
    l2.quan+=5;
    cout<<"Details of first book is : "<<endl;
    l1.display();
    cout<<"Details of second book is : "<<endl;
    l2.display();

}
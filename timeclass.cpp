#include<iostream>
using namespace std;
class Time{
    public:
    int h,m,s;
    void number();
    void member();
};
void Time::number()
{
    cout<<"Enter time in h:m:s format : "<<endl;
    cout<<"Hours : " ;
    cin>>h;
    cout<<"Minutes : " ;
    cin>>m;
    cout<<"Seconds : " ;
    cin>>s;
}
void Time::member()
{
    
    
    
}
int main()
{
    Time t1,t2;
    t1.number();
    t1.member();
    t2.number();

}
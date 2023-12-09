#include<iostream>
using namespace std;
class Flight{
    private:
        int f_no;
        string dest;
        float dist;
        float Fuel;
        void CALFUEL();
    public:
        void FEEDINFO();
        void SHOWINFO();  
};
void Flight::FEEDINFO()
{
    cout<<"Enter Flight Number : ";
    cin>>f_no;
    cout<<"Enter Destination : ";
    cin.ignore();
    getline(cin,dest);
    cout<<"Enter Distance : ";
    cin>>dist;
    CALFUEL();
}
void Flight::CALFUEL()
{
    if(dist<=1000)
        Fuel=500;
        if(dist<=1000)
            Fuel=500;
        else if(dist>1000 && dist<=2000)
            Fuel=1100;
        else
            Fuel=2200;
}
void Flight::SHOWINFO()
{
    cout<<"Flight Number : "<<f_no<<endl;
    cout<<"Destination : "<<dest<<endl;
    cout<<"Distance : "<<dist<<endl;
    cout<<"Fuel Required : "<<Fuel<<endl;
}
int main()
{
    Flight f1;
    f1.FEEDINFO();
    f1.SHOWINFO();
}
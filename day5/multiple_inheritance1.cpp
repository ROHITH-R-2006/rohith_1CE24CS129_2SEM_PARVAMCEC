#include<iostream>
using namespace std;
class Camera
{
    int resolution;
    public:
    Camera(int res):resolution(res)
    {
        cout<<"camers constructor"<<endl;
    }
    void display_cam()
    {
        cout<<"camera resolution"<<resolution<<endl;
    }
};
class Phone
{
    double phone_number;
    public:
    Phone(double num):phone_number(num)
    {
        cout<<"phone constructor:"<<endl;
    }
    void display_num()
    {
        cout<<"phone number"<<phone_number<<endl;
    }
};
class SmartPhone:public Phone,public Camera
{
    int network_speed;
    public:
    SmartPhone(int res,double num,int  speed):Camera(res),Phone(num),network_speed(speed)
    {
        cout<<"smartphone constructor"<<endl;
    }
    void display_sp()
    {
        cout<<"smart phone details:"<<endl;
        display_cam();
        display_num();
        cout<<"network speed:"<<network_speed<<endl;
    }
};
int main()
{
    SmartPhone p1(180,111111,50);
    p1.display_sp();
    return 0;
}

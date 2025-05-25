#include<iostream>
using namespace std;
class Notification
{
public:
    virtual void send(string message)=0;
};
class EmailNotification:public Notification
{
public:
    void send(string message)
    {
        cout<<"e-mail:"<<message<<endl;
    }
};
class SmsNotification:public Notification
{
public:
    void send(string message)
    {
        cout<<"SMS:"<<message<<endl;
    }
};
class PushNotification:public Notification
{
public:
    void send(string message)
    {
        cout<<"push:"<<message<<endl;
    }
};
int main()
{
   Notification*n1=new EmailNotification();
   Notification*n2=new SmsNotification();
   Notification*n3=new PushNotification();
   n1->send("hi how r ya");
   n2->send("hello there");
   n3->send("bye");
   return 0;
}
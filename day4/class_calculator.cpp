#include<iostream>
using namespace std;
class Calculator{
    private:
    int a,b,op;
    public:
    void getinput()
    {
        cout<<"enter two numbers: "<<endl;
        cin>>a>>b;
        cout<<"enter your choice (1,2,3,4,5,6):"<<endl;
        cin>>op;
    }
    void add(){
        cout<<"Sum:"<<a+b<<endl;
    }
    void sub(){
        cout<<"Difference:"<<a-b<<endl;
    }
    void mul(){
        cout<<"Product:"<<a*b<<endl;
    }
    int div()
    {
        if(b!=0)
        {
           cout<<"Quotient:"<<a/b<<endl;
        }
        else
        {
            cout<<"zero division error"<<endl;
        }
    }    
    void mod(){
        cout<<"Remainder:"<<a%b<<endl;
    }
    void exit(){
        cout<<"you have exited:"<<endl;
    }
    int display()
    {
        switch(op)
        {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                mod();
                break;
            case 6:
                exit();
                break;
            default:
                cout<<"invalid choice"<<endl;
                break;
        }
    }
};
int main()
{
    Calculator c1;
    c1.getinput();
    c1.display();
}

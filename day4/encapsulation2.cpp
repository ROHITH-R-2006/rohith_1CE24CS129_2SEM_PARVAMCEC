#include<iostream>
using namespace std;
class Bank
{
private:
    string bank_name;
    int account_number;
public:
    string getName()
    {
        return this->bank_name;
    }
    int getNum()
    {
        return this->account_number;
    }
    void setName(string name)
    {
        this->bank_name=name;
    }
    void setNum(int num)
    {
        this->account_number=num;
    }
};
int main()
{
    Bank b1;
    b1.setName("mark");
    b1.setNum(1233);
    cout<<"name:"<<b1.getName()<<endl;
    cout<<"number:"<<b1.getNum()<<endl;
    return 0;
}

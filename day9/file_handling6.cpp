#include<iostream>
#include<fstream>
using namespace std;
class Student
{
private:
    string name;
    int roll_num;
public:
    void takeInput()
    {
        cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter the roll number:"<<endl;
        cin>>roll_num;
    }
    void display()
    {
        takeInput();
        cout<<"student details:"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"roll_num:"<<roll_num<<endl;
    }
};
int main()
{
    double a=10;
    cout<<"size of a:"<<sizeof(a)<<endl;
    Student s1;
    s1.display();
//write mode
    ofstream fout("studendts.dat",ios::binary);
    fout.write((char *)&s1,sizeof(s1));
    fout.close();
// read mode
    Student s2;
    s2.display();
    ifstream fin("studendts.dat",ios::binary);
    fin.read((char *)&s2,sizeof(s2));
    return 0;
}

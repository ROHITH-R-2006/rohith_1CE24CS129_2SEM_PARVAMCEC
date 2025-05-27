#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string gender;
public:
    Person()
    {
        name="";
        age=0;
        gender="";
    }
    Person(string name,int age,string gender):name(name),age(age),gender(gender)
    {
        cout<<"person constructor"<<endl;
    }
    string getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
    string getGender()
    {
        return this->gender;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age;
    }
    void setGender(string gender)
    {
        this->gender;
    }
    void inputBasicDetails()
    {
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter age:"<<endl;
        cin>>age;
        cout<<"enter gender:"<<endl;
        cin>>gender;
    }
    void displayBasicDetails()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"gender:"<<gender<<endl;
    }
};


class Student:public Person
{
private:
    int rollNumber;
    string classGrade;
    string section;
public:
    Student()
    {
        rollNumber=0;
        classGrade="";
        section="";
    }
    Student(string name,int age,string gender,int num,string grade,string section):Person(name,age,gender),rollNumber(num),classGrade(grade),section(section)
    {
        cout<<"student constructor"<<endl;
    }
    void inputStudentDetails()
    {
        cout<<"enter student details:"<<endl;
        inputBasicDetails();
        cout<<"enter roll number:"<<endl;
        cin>>rollNumber;
        cout<<"enter class grade:"<<endl;
        cin>>classGrade;
        cout<<"enter section:"<<endl;
        cin>>section;
    }
    void displayStudentDetails()
    {
        cout<<"student deatils:"<<endl;
        displayBasicDetails();
        cout<<"Roll number:"<<rollNumber<<endl;
        cout<<"class grade:"<<classGrade<<endl;
        cout<<"section:"<<section<<endl;
    }
};


class Teacher:public Person
{
private:
    int employeeId;
    string subject;
    string department;
public:
    Teacher()
    {
        employeeId=0;
        subject="";
        department="";
    }
    Teacher(string name,int age,string gender,int id,string subject,string department):Person(name,age,gender),employeeId(id),subject(subject),department(department)
    {
        cout<<"teacher constructor"<<endl;
    }
    void inputTeacherDetails()
    {
        cout<<"teacher details:"<<endl;
        inputBasicDetails();
        cout<<"enter employee id:"<<endl;
        cin>>employeeId;
        cout<<"enter subject:"<<endl;
        cin>>subject;
        cout<<"enter department:"<<endl;
        cin>>department;
    }
    void displayTeacherDetails()
    {
        cout<<"teacher deatils:"<<endl;
        displayBasicDetails();
        cout<<"employee id:"<<employeeId<<endl;
        cout<<"subject:"<<subject<<endl;
        cout<<"department:"<<department<<endl;
    }
};


int main()
{
    Student s1;
    s1.inputStudentDetails();
    s1.displayStudentDetails();
    Teacher t1;
    t1.inputTeacherDetails();
    t1.displayTeacherDetails();
}




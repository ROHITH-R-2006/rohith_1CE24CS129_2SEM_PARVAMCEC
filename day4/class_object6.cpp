#include <iostream>
using namespace std;
class Student 
{
private:
    string name;
    int rollNumber;
    float marks;
public:
    void setDetails(string n, int r, float m) 
    {
        this->name = n;
        this->rollNumber = r;
        updateMarks(m);  // Ensure marks are within range
    }
    void updateMarks(float m) 
    {
        if (m < 0) 
        {
            marks = 0;
        } 
        else if (m > 100) 
        {
            marks = 100;
        } 
        else 
        {
            marks = m;
        }
    }
    string getName() 
    {
        return this->name=name;
    }
    int getRollNumber() 
    {
        return this->rollNumber=rollNumber;
    }
    float getMarks() 
    {
        return this->marks=marks;
    }
};
int main() 
{
    Student s;
    string name;
    int roll;
    float marks;
    cout << "Enter student name: ";
    cin>>name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;
    s.setDetails(name, roll, marks);
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.getName() << endl;
    cout << "Roll Number: " << s.getRollNumber() << endl;
    cout << "Marks: " << s.getMarks() << endl;
    return 0;
}
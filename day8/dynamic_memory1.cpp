/*types of memory
  1. static(stack)
  2. dynamic(heap)
  =================
  dynamic memory:
  new-allocate the memory
  delete-release the allocated memory
*/

#include<iostream>
using namespace std;
class Student
{
    int a=10;
    int rol_num;
};
int main()
{
    int a=10;
    Student s1;
//dynamic memory
//data_type*variable_name=new data_type
    int *a1=new int;
    *a1=20;
    cout<<"the value of a1:"<<*a1<<endl;
//delete variable_name or pointer_name
    delete a1;
    return 0;
}
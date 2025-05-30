#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("1_file_handling.txt");//it will open in write mode 
    fout<<"hello world\n";
    fout.close();
    fout.open("1_file_handling.txt",ios::app);//it will open in append mode
    fout<<"goodbye world\n";
    fout.close();
    cout<<"file is closed"<<endl;
}
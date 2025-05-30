#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("1_file_handling.txt");//it will open in write mose and if the file is not present in the cwd it will create a new file with specified name
    fout<<"hello world\n";
    fout.close();
    cout<<"file is closed"<<endl;
}
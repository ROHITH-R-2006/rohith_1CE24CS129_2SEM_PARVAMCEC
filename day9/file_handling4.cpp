#include<iostream>
#include<fstream>
#include<sstream>//for the use of get(),put()
using namespace std;
int main()
{
    ofstream fout("3_filehandling.txt");
    fout.put('R');
    fout.close();
    ifstream fin("3_filehandling.txt");
    char v1;
    fin.get(v1);
    fin.close();
    cout<<"the value is:"<<v1<<endl;
}
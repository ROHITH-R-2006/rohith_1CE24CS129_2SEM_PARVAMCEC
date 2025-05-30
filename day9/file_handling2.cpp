#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("1_file_handling.txt");//open in read mode
    string line;
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}
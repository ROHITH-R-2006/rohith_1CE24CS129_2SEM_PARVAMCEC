#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("2_filehandling.txt");
    fout<<"yooooo\n";
    fout<<"hiiiii\n";
    fout<<"suppp\n";
    fout.close();
    ifstream fin;
    fin.open("2_filehandling.txt");
    string line;
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}
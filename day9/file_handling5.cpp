#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    int res=a+b;
    ofstream fout("4_filehandling.txt");
    fout<<"sum of "<< a <<" and "<<b<< " is:"<<res<<endl;
    fout.close();
    ifstream fin("4_filehandling.txt");
    string sentence;
    getline(fin,sentence);
    cout<<sentence<<endl;
    fin.close();
}
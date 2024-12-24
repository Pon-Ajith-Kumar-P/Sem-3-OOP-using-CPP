#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("sample.txt");
    while(fout)
    {
        cout<<"\nEnter the string (-1 to stop) : ";     
        getline(cin,line);
        if(line=="-1")
            break;
        fout<<line<<endl;
    }
    fout.close();
    ifstream fin;
    fin.open("sample.txt");
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    cout<<"\nDone Successfully";
}
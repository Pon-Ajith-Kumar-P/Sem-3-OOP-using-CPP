#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    //Writing
    fout.open("sample.txt");
    while(fout)
    {
        getline(cin,line);
        if(line=="-1")
            break;
        fout<<line<<endl;
    }
    fout.close();
    //Reading
    ifstream fin;
    fin.open("sample.txt");
    cout<<"\nThe contents in the file\n";
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}
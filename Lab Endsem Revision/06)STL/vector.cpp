#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
}
int main()
{
    vector<int> v;
    v = {1,2,3,4,5};
    cout<<"\nSize : "<<v.size();

    cout<<"\nDisplaying the vector\n";
    display(v);

    cout<<"\nDisplaying element at 2nd pos : "<<v.at(2);

    cout<<"\nChanging element at 2nd pos\n";
    v.at(2) = 10;

    cout<<"\nDisplaying the vector\n";
    display(v);

    cout<<"\nInsert an element at any specific position\n";
    v.insert(v.begin()+1,100);

    cout<<"\nInsert new element at the end\n";
    v.push_back(25);

    cout<<"\nDisplaying the vector\n";
    display(v);

    cout<<"\nDelete a specific element\n";
    v.erase(find(v.begin(),v.end(),10));

    cout<<"\nDelete new element at the end\n";
    v.pop_back();

    cout<<"\nDisplaying the vector\n";
    display(v);

    cout<<"\nCheck whether the vector is empty?";
    if(v.empty())
        cout<<"\nEmpty";
    else
        cout<<"\nNot Empty";

    cout<<"\nResizing the vector";
    v.resize(7,25);

    cout<<"\nDisplaying the vector\n";
    display(v);

    cout<<"\nReversing the vector";
    reverse(v.begin(),v.end());

    cout<<"\nDisplaying the vector\n";
    display(v);

    cout<<"\nSort(asc) the vector";
    sort(v.begin(),v.end());

    cout<<"\nDisplaying the vector\n";
    display(v);

    cout<<"\nSort(desc) the vector";
    sort(v.begin(),v.end(),greater<>());

    cout<<"\nDisplaying the vector\n";
    display(v);

    cout<<"\nSwapping two vectors\n";
    vector<int> v0(7,10);
    v.swap(v0);

    cout<<"\nDisplaying the vector v\n";
    display(v);
    
    cout<<"\nDisplaying the vector v0\n";
    display(v0);
} 
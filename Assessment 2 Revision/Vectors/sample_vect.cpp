#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v; 
    v={1,2,3,4};
    cout<<"\nSize of the vector"<<v.size();
    cout<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nAccessing element at 2nd pos = "<<v.at(2);
    cout<<"\nUpdating an element in the vector"; v.at(2) = 10;
    cout<<"\nAccessing updated element at 2nd pos = "<<v.at(2);
    cout<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nInserting the new element at the end";
    v.push_back(25);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nDeleting the element at the end";
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nChecking whether vector is empty or not";
    if(v.empty())
        cout<<"\nEmpty";
    else
        cout<<"\nNot Empty";
    cout<<"\nResizing the vector";
    v.resize(5,0);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
   cout<<"\nReversing the vector";
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
   cout<<"\nSorting the vector in ascending order";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }   
    cout<<"\nSorting the vector in descending order";
    sort(v.begin(),v.end(),greater<>());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nSwapping the vectors";
    vector<int> v2(10,0);
    v.swap(v2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

}
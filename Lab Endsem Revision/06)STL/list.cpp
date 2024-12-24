#include <iostream>
#include <list>
using namespace std;

void showlist(list<int> mylist)
{
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<'\t'<<*it;
    }
}

int main() 
{
    // Declare a list of integers
    list<int> myList;

    for(int i=1;i<=3;i++)
    {
        myList.push_front(i*2);
    }

        myList.push_back(10); // Add 10 at the end
    myList.push_back(20); // Add 20 at the end
    myList.push_front(5); // Add 5 at the front

    // Display the list
    cout << "Elements in the list: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1 = "Hello. ";
    string s2 = "This is CPP";
    cout<<s1+s2;
}

/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50] = "Hello. "; // Ensure the array has enough space for concatenation
    char s2[] = "This is CPP";
    strcat(s1, s2); // Concatenates s2 into s1
    cout << "Concatenation : " << s1;
    return 0;
}
*/

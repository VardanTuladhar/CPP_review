#include <iostream>
using namespace std;

int main()
{
    string str1("first string");// create first string
    cout << str1 << endl; //print string
    string str2(str1); // copy string1 
    cout << str2 << endl;
    string str3(5, '#'); // print five hashes
    cout << str3 << endl;
    string str4(str1, 6, 6);
    cout << str4;
}

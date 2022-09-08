#include<iostream>
using namespace std;

int main ()
{
    //This goes over the basics of a pointer 
    int x = 10; //data
    int *ptr = &x; //pointer to data 

    cout << "The unary ptr value is equal to x" << endl << "x = "<< x << "= *ptr = "<< *ptr << endl;
    cout << "The addrress of x is the same as the ptr value"<< endl << " &x = "<< &x << "= ptr =" << ptr << endl;

    //This goes over the basic of a pointer when used for an array
    int v[4] = {10, 20, 30, 50};
    int *ptr2;

    ptr2 = v; //unlike the int normal where a & is need to get the address in memory with an array not using the index braket ([]) give us the address of the array
    for( int i = 0; i < 4; i++) //loop to interate through array using 
    {
        cout << "This print printd the " << i << " interation of the array using ptr2 which is "<< *ptr2 << endl;
        ptr2++; 
    }  
}
#include <iostream>

using namespace std;

int main()
{
    /*
    increment dan decrement
    preincrement dan postincrement

    preincrement itu sebelum
    postincrement itu sesudah
    */

    int a = 5;
    int b = 5;

    // postincrement
    cout << a << endl;
    // a = a + 1; kita bisa singkat a++;
    cout << a++ << endl;
    cout << a << endl<<endl;

    // preincrement
    cout << b << endl;
    cout<<++b<<endl; 
    cout << b << endl;




    return 0;
}

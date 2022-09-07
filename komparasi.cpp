#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 2;
    int c = 3;

    bool hasil1, hasil2;

    // komprasi, relation expression, membandingkan

    cout << "jika 1 maka True, jika 0 maka False"<<endl;

    // sebanding ==
    hasil1 = ( a == b);
    cout<< a << " == " << b << " : " << hasil1 << endl;

    // tdk sebanding !=
    hasil2 = ( a != b);
    cout<< a << " != " << b << " : " << hasil2 << endl;

    // kurang dari <
    hasil1 = ( a < c);
    cout<< a << " < " << c << " : " << hasil1 << endl;

    // lebih dari >
    hasil2 = ( a > c);
    cout<< a << " > " << c << " : " << hasil2 << endl;

    //  sama kurang dari <
    hasil1 = ( a <= b);
    cout<< a << " <= " << b << " : " << hasil1 << endl;

    // sama lebih dari >
    hasil2 = ( a >= b);
    cout<< a << " >= " << b << " : " << hasil2 << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    
    // assignment
    int a = 10;
    cout << "nilai awal dari a adalah : " << a << endl;

    /* 
    assignment operator
    variabel = variabel operasi ekspresi
        a,   =,    a,      -        3
    variabel operator= ekspresi
        a,       +=,      3
    */

    a += 3;
    cout<<"ditambah 3 menjadi "<<a<<endl;

    a -= 3;
    cout<<"kurang 3 menjadi "<<a<<endl;

    a /= 3;
    cout<<"dibagi 3 menjadi "<<a<<endl;

    a *= 3;
    cout<<"kali 3 menjadi "<<a<<endl;

    a %= 3;
    cout<<"kali 3 menjadi "<<a<<endl;




    return 0;
}

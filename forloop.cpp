#include <iostream>

using namespace std;

int main()
{
    /*
    int a = 1; ini disebut inisialisasi
    for(inisialisasi, loop kondisi, increment){
        statemen;
    }
    */

    cout << "Loop 1 \n"<< endl;
    for (int i = 1; i < 10; i++)
    {
        cout << i<< endl;
    }

    cout << "\n Loop 2 \n";
    for (int i = 1; i < 10; i+=2)
    {
        cout << i<< endl;
    }

    cout << "\n Loop 3 \n";
    for (int i = 1; i >= -10; i--)
    {
        cout << i<< endl;
    }

    cout << "\n Loop 4 \n";
    int total = 0;
    for (int i = 1; i <= 10; i++)
    {
        total += i;
        cout<< i << " || "<< total <<endl;
    }

    
    
    return 0;
}

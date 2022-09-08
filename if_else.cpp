#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "masukan angka = ";
    cin >> a;

    // if statemen
    // kondisi dalam bentuk boolean
    // jika kondisi bernilai true maka isi statemen akan dijalankan
    if( a == 5) //ini kondisi
    {
        // isis statemen
        cout << "nilai ini sama dgn 5" << endl;
    } else if( a == 3 ){
        // isis statemen
        cout << "nilai ini tdk sama dgn 3" << endl;
    }else if( a == 1 ){
        // isis statemen
        cout << "nilai ini tdk sama dgn 1" << endl;
    }else{
        cout << "bukan 5,3, atau 1" << endl;
    }

    cout << "Selesai" << endl;

    return 0;
}

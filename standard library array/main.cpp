#include <iostream>
#include <array>

int main()
{
    // membuat array dgn menggunakan standard library
    // array<int, jumblah array> nama array
    array <int, 5> nilai;

    for(int i = 0; i <= 4; i++){
        nilai[i] = i;
        cout << "nilai [" << i << "] = " << nilai[i] << " address : "<< &nilai[i] << endl;

    }
    return 0;
}

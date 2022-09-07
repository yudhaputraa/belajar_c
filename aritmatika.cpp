#include <iostream>

using namespace std;

int main(){

    int a = 6;
    float float_a = 6;
    int b = 4;

    int hasil;
    float float_hasil;
    // operatornya +, -, *, /, %

    // penjumlahan
    hasil = a + b;
    cout <<a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout <<a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout <<a << " x " << b << " = " << hasil << endl;

    // pembagian
    float_hasil = float_a / b;
    cout <<float_a << " / " << b << " = " << float_hasil << endl;

    // modules/ sisa bagi
    hasil = a % b;
    cout <<a << " % " << b << " = " << hasil << endl;

    // urutan eksekusi;
    hasil = (a+b)*a;
    cout << hasil << endl;

    return 0;
}
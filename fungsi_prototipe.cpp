#include <iostream>

using namespace std;

// prototype
double hitung_luas(double p, double l);
void println(double x);

int main()
{
    double panjang,lebar, luas;
    cin>> panjang;
    cin>> lebar;
    luas = hitung_luas(panjang,lebar);
    println(luas);
    return 0;
}

double hitung_luas(double p, double l){
    return p*l;
}

void println(double x){
    cout<<"Hasil : " <<x<<endl;
}

/*
Function Prototype adalah sebuah pernyataan deklarasi function tanpa 
menggunakan badan atau definisi dari function dan di akhiri dengan 
semicolon ";"". Function prototype berfungsi memberitahukan kepada 
kompiler bahwa function tersebut ada.
*/
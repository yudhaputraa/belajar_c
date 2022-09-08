#include <iostream>

using namespace std;

int main()
{
    float a,b;
    char aritmatika;

    cout<<"selamat datang di program calculator \n\n";

    // memasukkan input dari user
    cout << "Masukan nilai pertama : ";
    cin >> a;
    cout << "pilih operator +,-,/,*: ";
    cin >> aritmatika;
    cout << "Masukan nilai kedua : ";
    cin >> b;

    cout<<"\n hasil perhitungan : ";
    cout << a << aritmatika << b;

    int hasil;
    if(aritmatika == '+'){
        hasil = a + b;
    } else if(aritmatika == '-'){
        hasil = a - b;
    }else if(aritmatika == '/'){
        hasil = a / b;
    }else if(aritmatika == '*'){
        hasil = a * b;
    }else{
        cout << "operator anda salah" <<endl;
    }

    cout << " = "<<hasil << endl;
    
    return 0;
}

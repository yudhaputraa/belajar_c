#include <iostream>
using namespace std;

// fungsi rekursif terbatas
int pangkatIterasi( int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b){
    // ini finite recursion
    if(b <= 1){
        cout<< "akhir dari rekursif ";
        return a;
    }else{
        return a * pangkatRekursif(a,(b-1));
    }
    
}

int main()
{
    int a;
    int b;
    cout<< "angka : ";
    cin>> a;
    cout<< "pangkat : ";
    cin>> b;
    cout << "hasil iterasi = " << pangkatIterasi(a,b)<<endl;
    cout << "hasil rekursif = " << pangkatRekursif(a,b)<<endl;
    return 0;
}

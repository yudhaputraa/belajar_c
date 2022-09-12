#include <iostream>
using namespace std;

// reporter
int kuadrat( int x){ // fungsi kembalian
    int y;
    y=x*x;
    return y;
}
// worker
void tampilkan( int input){
    cout << "menampilkan dgn void\n";
    cout<< input<< endl;

}

int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(int argc, char const *argv[])
{
    int input,hasil,a,b,hasil2;
    cout<< "nilai kuadrat dari : ";
    cin>> input;

    hasil =kuadrat(input);
    cout<<hasil<< endl;
    tampilkan(hasil);

    cout<< "masukan nilai a : ";
    cin>> a;
    cout<< "masukan nilai b : ";
    cin>> b;
    hasil2 = tambah(a,b);
    cout<< hasil2;

    return 0;
}

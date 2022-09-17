#include <iostream>
#include <string>

using namespace std;

struct mahasiswa
{
    string nama;
    string nim;
    string alamat;
};
int main()
{
    struct mahasiswa biodata[10];

    int keluaran = 2;
    for (int i = 0; i < keluaran; i++)
    {
        cout << "masukkan data : "<<endl;
        cout<< "masukan nama : ";
        getline(cin, biodata[i].nama);
        cout<< "masukan nim : ";
        getline(cin, biodata[i].nim);
        cout<< "masukan alamat : ";
        getline(cin, biodata[i].alamat);
    }
    cout<<"####### Data Mahasiswa ######"<<endl;
        for (int i = 0; i < keluaran; i++)
    {      
        cout<<"-------------------------------"<<endl;
        cout << "data : "<< i <<endl;
        cout<< "nama : "<<biodata[i].nama<<endl;
        cout<< "nim : "<<biodata[i].nim<<endl;
        cout<< "alamat : "<<biodata[i].alamat<<endl;
    }
}
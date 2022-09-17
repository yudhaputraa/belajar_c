#include <iostream>
#include <string>

using namespace std;

int keluaran = 2;
const string Create = "create";
const string Read = "read";
const string Update = "update";
const string P_delete = "delete";
const string Keluar = "keluar";

struct mahasiswa
{
    string nama;
    string nim;
    string alamat;
};

struct mahasiswa biodata[10];

int tamba_data(){

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
}

int tampil_semua(){
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

int main()
{
    while (true)
    {   
        string in_masuk;
        cout<<"ada ingin melakukan apa : \n";
        cout<<"1. tambah = Create \n";
        cout<<"2. tampilkan data semua = Read \n";
        cout<<"3. ubah = Update\n";
        cout<<"4. hapus = Delete\n";
        cout<<"5. keluar \n";
        cout<<"Masukkan : ";
        getline(cin, in_masuk);
        if(in_masuk == Create){
            cout<<tamba_data();
        }else if (in_masuk == Read){
            cout<<tampil_semua();
        }else if (in_masuk == Update){
            
        }else if (in_masuk == P_delete){
            break;
        }else if (in_masuk == Keluar){
            break;
        }else{
            cout<<"Warning ketik angka sesuai benar cukk\n"<<endl;
        }
        
    }
    
}

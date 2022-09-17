#include <iostream>
#include <string>

using namespace std;
int main()
{
	string nama,jurusan,asal_kota,nomer_hp,nim;
    
	cout<<"#############################################################"<<endl;
    cout<<"#                      Tugas Kelompok                       #"<<endl;
    cout<<"#-----------------------------------------------------------#"<<endl;
    cout<<"#                     Anggota Kelompok                      #"<<endl;
    cout<<"#                      - Yudha Putra                        #"<<endl;
    cout<<"#                        - Della                            #"<<endl;
	cout<<"#############################################################"<<endl;

	cout<<"Masukan Data Berikut : "<<endl<<endl;

	cout<<"Nama      : ";
	getline (cin, nama); 

	cout<<"NIM       : ";
	getline (cin, nim); 

	cout<<"Nomer Hp  : ";
	getline (cin, nomer_hp); 

	cout<<"Jurusan   : ";
	getline (cin, jurusan); 

	cout<<"Asal Kota : ";
	getline (cin, asal_kota);
    cout<<endl;

	cout<<"         Biodata Anda"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama      : "<<nama<<endl;
	cout<<"NIM       : "<<nim<<endl;
	cout<<"Nomer Hp  : "<<nomer_hp<<endl;
	cout<<"Jurusan   : "<<jurusan<<endl;
	cout<<"Asal Kota : "<<asal_kota<<endl;
    return 0;
}

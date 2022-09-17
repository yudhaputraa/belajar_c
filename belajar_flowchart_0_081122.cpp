#include<iostream>
#include <string>
using namespace std;

int main(){
	string nama, bulan, jeniskelamin, agama, alamat, status, pekerjaan, kewarganegaraan, nomortelepon, hobi;
	int tanggal, tahun;
	
	cout<<"Masukkan Nama Anda : ";
	getline (cin,nama);
	cout<<"Masukkan Tanggal Lahir Anda : ";
	cin>>tanggal;
	cout<<"Masukkan Bulan Lahir Anda : ";
	cin>>bulan;
	cout<<"Masukkan Tahun Lahir Anda : ";
	cin>>tahun;
	cout<<"Masukkan Jenis Kelamin : ";
	cin>>jeniskelamin;
	cout<<"Masukkan Agama Anda : ";
	cin>>agama;
	cout<<"Masukkan Alamat Anda : ";
	cin>>alamat;
	cout<<"Masukkan Status Anda : ";
	cin>>status;
	cout<<"Masukkan Pekerjaan Anda : ";
	cin>>pekerjaan;
	cout<<"Masukkan Kewarganegaraan Anda : ";
	cin>>kewarganegaraan;
	cout<<"Masukkan Nomor Telepon Anda : ";
	cin>>nomortelepon;
	cout<<"Masukkan Hobi Anda : ";
	cin>>hobi;
	
	cout<<"\ntanggal lahir : "<<tanggal;
	cout<<"\ntahun : "<<tahun;
	return 0;
}

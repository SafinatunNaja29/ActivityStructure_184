#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140184";
	mhs1.nama = "Safina";
	mhs1.alamat = "Yogyakarta";
	mhs1.umur = 18;

	cout << "Masukkan nim: ";
	cin >> mhs2.nim;
	cout << "Masukkan nama: ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat: ";
	cin >> mhs2.alamat;
	cout << "Masukkan umur: ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nNama : " << mhs1.nama;
	cout << "\nAlamat : " << mhs1.alamat;
	cout << "\nUmur : " << mhs1.umur; 

}
#include <iostream>
using namespace std;

struct Mahasiswa //struct mahasiswa untuk mengambil input data mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs; //inisialisasi variabel mhs untuk mengakses struck mahasiswa
    cout << "NIM Mahasiswa : ";
    cin >> mhs.nim; //membuat display untuk mengambil data nim mahasiswa
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama; //membuat display untuk mengambil data nama mahasiswa
    cout << "Alamat Mahasiswa : ";
    cin >> mhs.alamat; //membuat display untuk mengambil data alamat mahasiswa
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur; //membuat display untuk mengambil data umur mahasiswa

    cout << endl;
    cout << "\nNIM    : " << mhs.nim; //membuat display dari data nim mahasiswa yang telah di inputkan
    cout << "\nNama   : " << mhs.nama; //membuat display dari data nama mahasiswa yang telah di inputkan
    cout << "\nAlamat : " << mhs.alamat; //membuat display dari data alamat mahasiswa yang telah di inputkan
    cout << "\nUmur   : " << mhs.umur; //membuat display dari data umur mahasiswa yang telah di inputkan

}
    
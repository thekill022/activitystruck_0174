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

}
    
#include <iostream>
using namespace std;

struct DetailAlamat //membuat struct untuk detail alamat mahasiswa
{
    string desa;
    string kota;
};

struct Mahasiswa //struct mahasiswa untuk mengambil input data mahasiswa
{
    string nim;
    string nama;
    DetailAlamat alamat; //mengganti tipe data string menjadi struck DetailAlamat di variabel alamat
    int umur;
};

int main()
{
    //membuat input nim dan nama mahasiswa
    Mahasiswa mhs;
    cout << "NIM Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;

    //membuat input alamat disertai detail dari alamat mahasiswa
    cout << "Alamat Mahasiswa : ";
    cout << "\tNama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\tNama Kota : ";
    cin >> mhs.alamat.kota;

    //membuat input umur mahasiswa
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    //membuat display untuk nim dan nama mahasiswa dari data yang telah di inputkan
    cout << "\nNIM    : " << mhs.nim;
    cout << "\nNama   : " << mhs.nama; 
    //membuat display untuk alamat disertai detail alamat mahasiswa dari data yang telah di inputkan
    cout << "\nAlamat : " << endl;
    cout << "\n\tDesa : " << mhs.alamat.desa;
    cout << "\n\tKota : " << mhs.alamat.kota;
    //membuat display untuk umur mahasiswa dari data yang telah di inputkan
    cout << "\nUmur   : " << mhs.umur;

}

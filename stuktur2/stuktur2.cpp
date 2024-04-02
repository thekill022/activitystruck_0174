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


}

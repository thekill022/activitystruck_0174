#include <iostream>
#include <string> //menyertakan library string untuk menggunakan fungsi getline
using namespace std;


//membuat struck DetailAlamat dan Mahasiswa untuk menyimpan input data mahasiswa
struct DetailAlamat
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};


int main()
{
    //membuat input untuk nim dan nama mahasiswa diserta getline agar spasi tidak terbaca sebagai value variabel berikutnya
    Mahasiswa mhs;
    cout << "NIM Mahasiswa : ";
    getline(cin, mhs.nim);
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);

    //membuat input untuk alamat mahasiswa disertai detail
    cout << "Alamat Mahasiswa : " << endl;
    cout << "\tNama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\tNama Kota : ";
    cin >> mhs.alamat.kota;

    //membuat input umur mahasiswa
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

   //membuat display untuk menampilkan semua data yang telah di inputkan mahasiswa
    cout << endl;
    cout << "\nNIM    : " << mhs.nim;
    cout << "\nNama   : " << mhs.nama;
    cout << "\nAlamat : ";
    cout << "\n\tDesa : " << mhs.alamat.desa;
    cout << "\n\tKota : " << mhs.alamat.kota;
    cout << "\nUmur   : " << mhs.umur;

}

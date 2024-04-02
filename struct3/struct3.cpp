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
}

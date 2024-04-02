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
    Mahasiswa mhs[3]; //inisialisasi variabel mhs sebagai array untuk mengakses struck mahasiswa dan menapung banyak nilai

    for (int i = 0; i < 3; i++) //membuat looping for untuk meminta input data mahasiswa
    {

    }
}

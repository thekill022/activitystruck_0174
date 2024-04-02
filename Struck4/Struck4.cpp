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
        //membuat output untuk meminta data mahasiswa dan disimpan didalam array mhs
        cout << "Input Data Mahasiswa Ke-" << (i + 1) << " : " << endl;
        cout << "NIM Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "Alamat Mahasiswa : " << endl;
        cout << "\tNama Desa : ";
        cin >> mhs[i].alamat.desa;
        cout << "\tNama Kota : ";
        cin >> mhs[i].alamat.kota;

        cout << "Umur Mahasiswa : ";
        cin >> mhs[i].umur;
        //menambahkan cin.ignore() agar permintaan input NIM yang kedua tidak terskip
        cin.ignore(1, '\n');
        cout << endl;
    }

    for (int i = 0; i < 3; i++) //membuat looping for untuk menampilkan input data mahasiswa
    {

    }
}

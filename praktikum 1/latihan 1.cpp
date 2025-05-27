#include <iostream> //preposesor
using namespace std;

int main(){ //fungsi utama
    string nama = "hasrul", alamat = "Tulungagung";
    int usia = 19;
    char jenis_kelamin = 'l';
    bool status_kerja = false, mengendarai_motor = true;
    float pengeluaran = 500000;

    cout<<"Nama : "<<nama<<endl;
    cout<<"Alamat : "<<alamat<<endl;
    cout<<"Usia : "<<usia<<endl;
    cout<<"Jenis Kelamin : "<<jenis_kelamin<<endl;
    cout<<"Sudah Bekerja : "<<status_kerja<<endl;
    cout<<"Pengeluaran Per Bulan : "<<pengeluaran<<endl;
    cout<<"Bisa Mengendarai Motor : "<<mengendarai_motor<<endl;

    system("pause");
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string baris;
    // membuka file dalam mode membaca
    ifstream bacafile;

    // menunjuk ke sebuah file
    bacafile.open("tahun.txt");

    cout << endl
         << ">= Membuka dan membaca file " << endl;

    // jika file ada maka
    if (bacafile.is_open())
    {
        getline(bacafile, baris);

        cout << baris << endl;

        // tutup file tersebut setelah selasai
        bacafile.close();
    }
    // ika tidak ditemukan file maka akan menampilkan ini
    else
        cout << "Tidak dapat membuka file";

    // proses hitung usia
    cout<<"\nProses Hitung Usia"<<endl;
    int tahun_lahir = stoi(baris);
    unsigned short int usia, tahun_sekarang = 2025;

    usia = tahun_sekarang - tahun_lahir;

    cout << "Tahun Lahir = " << tahun_lahir << endl;
    cout << "Tahun Sekarang " << tahun_sekarang << endl;
    cout << "Usia anda sekarang = " << usia << " tahun" << endl;

    // membuka file dalam mode menulis
    ofstream tulisfile;

    // menunjuk ke sebuah nama file
    tulisfile.open("usia.txt");

    cout << "\n= Menulis file, untuk menulis usia " << endl;

    tulisfile << usia << endl;
    // selesai dalam menulis file sekarang tutup filenya
    tulisfile.close();

    system("pause");
    return 0;
}
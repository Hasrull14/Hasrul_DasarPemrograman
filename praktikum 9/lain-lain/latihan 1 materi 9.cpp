#include<iostream>
using namespace std;

// Variabel global
int total_pilihan = 0;

// Prosedur tanpa parameter (menampilkan menu)
void tampilkan_menu(){
    cout << "\nMENU MAKANAN" << endl;
    cout << "1. Nasi Goreng" << endl;
    cout << "2. Mie Ayam" << endl;
    cout << "3. Sate Ayam" << endl;
    cout << "4. Bakso" << endl;
    cout << "0. Selesai Memilih" << endl;
}

// Prosedur dengan parameter (menampilkan pilihan)
void tampilkan_pilihan(string makanan){
    cout << "Anda memilih: " << makanan << endl;
    total_pilihan++;
}

// Fungsi dengan parameter (mengembalikan nama makanan)
string pilih_makanan(int kode){
    string makanan;
    switch(kode){
        case 1: makanan = "Nasi Goreng"; break;
        case 2: makanan = "Mie Ayam"; break;
        case 3: makanan = "Sate Ayam"; break;
        case 4: makanan = "Bakso"; break;
        default: makanan = "Pilihan tidak valid"; break;
    }
    return makanan;
}

int main(){
    int pilihan;
    string hasil;

    do {
        tampilkan_menu();
        cout << "Masukkan pilihan Anda (0 untuk selesai): ";
        cin >> pilihan;

        if (pilihan == 0) {
            break;
        }

        hasil = pilih_makanan(pilihan);

        if (hasil != "Pilihan tidak valid") {
            tampilkan_pilihan(hasil);
        } else {
            cout << hasil << endl;
        }

    } while (true);

    cout << "\nTotal makanan yang dipilih: " << total_pilihan << endl;

    return 0;
}


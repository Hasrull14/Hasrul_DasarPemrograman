
#include <iostream>
using namespace std;

//variabel global
int totalKg = 0;
int totalHarga = 0;

//fungsi (untuk menghitung harga berdasarkan kg)
int hitungHarga(int kg, int hargaPerKg) {
    int total = kg * hargaPerKg; // variabel lokal
    return total;
}

//prosedur (untuk menampilkan ringkasan pembelian)
void tampilkanRingkasan(int kg, int harga) {
    cout << "Jumlah: " << kg << " kg" << endl;
    cout << "Total Harga: Rp " << harga << endl;
    totalKg += kg;
    totalHarga += harga;
}

int main() {
    int kg;
    char status;
    const int hargaPerKg = 12000;

    status = 'y';
    do{
        cout << "Masukkan jumlah beras (kg): ";
        cin >> kg;

        int harga = hitungHarga(kg, hargaPerKg);
        tampilkanRingkasan(kg, harga);

        cout<<"Ingin memasukkan lagi : ";
        cin>>status;
    }while(status == 'y');
    

    cout << "\n=== Total Keseluruhan ===" << endl;
    cout << "Total Kg: " << totalKg << " kg" << endl;
    cout << "Total Harga: Rp " << totalHarga << endl;

    system("pause");
    return 0;
}
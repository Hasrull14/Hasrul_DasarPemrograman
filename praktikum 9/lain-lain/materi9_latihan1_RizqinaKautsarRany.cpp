#include <iostream>
#include <string>
using namespace std;

// Variabel global 
int totalKeseluruhan = 0;

void pembelianObat(string namaObat, int hargaSatuan, int jumlah) {
    // Variabel lokal 
    int totalHarga = hargaSatuan * jumlah;

    totalKeseluruhan += totalHarga;

    cout << "Obat: " << namaObat << endl;
    cout << "Harga satuan: Rp " << hargaSatuan << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Total harga: Rp " << totalHarga << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    
    pembelianObat("Paracetamol", 5000, 3);
    pembelianObat("Amoxicillin", 12000, 2);
    pembelianObat("Vitamin C", 8000, 1);

    cout << "Total keseluruhan pembelian: Rp " << totalKeseluruhan << endl;

    return 0; 
}

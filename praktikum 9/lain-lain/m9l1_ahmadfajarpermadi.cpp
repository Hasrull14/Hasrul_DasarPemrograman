#include <iostream>
using namespace std;

// Variabel global untuk nilai default
double keliling;
double luas;

// Deklarasi prosedur dengan parameter
void hitungDanTampilkan(double panjang, double lebar);


int main() {
    // Variabel lokal main
    double p, l;
    
    cout << "Masukkan panjang : ";
    cin >> p;
    cout << "Masukkan lebar : ";
    cin >> l;
    // Panggil prosedur dengan parameter
    hitungDanTampilkan(p, l);
    
    return 0;
}

// Definisi prosedur dengan parameter
void hitungDanTampilkan(double panjang, double lebar) {
    // Variabel lokal prosedur
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    
    // Tampilkan hasil
    cout << "\n=== Hasil Perhitungan ===" << endl;
    cout << "Panjang: " << panjang << endl;
    cout << "Lebar: " << lebar << endl;
    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;
}
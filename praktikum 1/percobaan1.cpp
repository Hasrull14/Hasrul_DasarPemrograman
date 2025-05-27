#include <iostream>
using namespace std;

int main() {
    // Variabel untuk menyimpan data
    string berita = "CNN Indonesia", kasus_berita = "korupsi", perusahaan = "PT Pertamina",tanggal_pemeriksaan = "28 Februari 2025", hari_pemeriksaan = "Jumat",nama_presiden = "Prabowo", tempat_penggeledahan = "Cilegon", tempat_berita = "Jakarta";
    
    int jumlah_tersangka=9;
    float jumlah_kerugian=193.7;

    // Menampilkan data
    cout << "Sumber Berita : " << berita << endl;
    cout << "Kasus Berita : " << kasus_berita << endl;
    cout << "PT yang Terlibat : " << perusahaan << endl;
    cout << "Tanggal Pemeriksaan : " << tanggal_pemeriksaan << endl;
    cout << "Hari Pemeriksaan : " << hari_pemeriksaan << endl;
    cout << "Tempat Penggeledahan : " << tempat_penggeledahan << endl;
    cout << "Tempat Berita : " << tempat_berita << endl;
    cout << "Nama Presiden : " << nama_presiden << endl;
    cout << "Jumlah Tersangka : " << jumlah_tersangka << endl;
    cout << "Jumlah Kerugian Negara: "<< jumlah_kerugian <<"T"<< endl;

    system("pause");
    return 0;
}

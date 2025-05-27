#include<iostream>
using namespace std;
string tanggal = "26 mei 2025";
string salam(string nama, string waktu){
    return "Halo "+nama+", Selamat "+waktu+", ditanggal "+tanggal;
}
int main()
{
    cout << tanggal << endl;
    string nama, waktu, greet;
    nama = "Hasrul";
    waktu = "Pagi";
    
    greet = salam(nama, waktu);
    cout << greet << endl;
    
    return 0;
}
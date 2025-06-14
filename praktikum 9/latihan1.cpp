#include <iostream>
using namespace std;
string tanggal = "26 mei 2025"; //variabel global
string salam(string nama, string waktu)
{
    string result = "Halo " + nama + ", Selamat " + waktu + ", ditanggal " + tanggal; //variabel lokal
    return result;
}
int main()
{
    cout << tanggal << endl;
    string nama, waktu, greet;
    nama = "Hasrul";
    waktu = "Pagi";

    greet = salam(nama, waktu);
    cout << greet << endl;

    system("pause");
    return 0;
}
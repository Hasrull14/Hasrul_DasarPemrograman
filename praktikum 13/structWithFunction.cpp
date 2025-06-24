#include <iostream>
using namespace std;
struct Kalender
{
    int tanggal;
    int bulan;
    int tahun;
    void cetak()
    {
        cout << tanggal << "/" << bulan << "/" <<tahun << endl;
    };
};
// void cetak(Kalender temp)
// {
//     cout << temp.tanggal << "/" << temp.bulan << "/" << temp.tahun << endl;
// };
int main()
{
    Kalender sekarang;
    sekarang.tanggal = 13;
    sekarang.bulan = 10;
    sekarang.tahun = 2020;
    sekarang.cetak();
    system("Pause");
    return 0;
}
#include <iostream>
using namespace std;
int hasil = 5; // Variabel hasil sebagai variabel global
void tampil()
{
    cout << "Hasil : " << hasil << endl;
    hasil = 4;
}
int main()
{
    tampil();
    cout << "Hasil : " << hasil << endl;

    system("pause");
    return 0;
}
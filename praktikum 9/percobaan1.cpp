#include <iostream>
using namespace std;

int hasil = 5; // Variabel hasil sebagai variabel global

void tampil()
{
    int hasil = 10; // Variabel hasil sebagai variabel lokal

    cout << "Hasil : " << hasil << endl;
}

int main()
{
    tampil();
    cout << hasil << endl;

    system("pause");
    return 0;
}

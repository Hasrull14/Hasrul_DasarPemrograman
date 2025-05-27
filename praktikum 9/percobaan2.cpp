#include <iostream>
using namespace std;

int hasil[3] = {1, 2, 3}; // Variabel hasil sebagai variabel global

void tampil()
{
    int hasil[3] = {4, 5, 6}; // Variabel hasil sebagai variabel lokal

    for (int i = 0; i < 3; i++)
    {
        cout << "Hasil : " << hasil[i] << endl;
    }
}

int main()
{
    tampil();
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Hasil : " << hasil[i] << endl;
    }

    system("pause");
    return 0;
}
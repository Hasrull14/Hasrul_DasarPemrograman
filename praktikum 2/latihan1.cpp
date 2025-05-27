#include <iostream>
using namespace std;

int main()
{
    const float Pi = 3.14;
    float luas, volume, r, s, t;

    cout << "Jari jari = ";
    cin >> r;
    cout << "Garis pelukis = ";
    cin >> s;
    cout << "Tinggi = ";
    cin >> t;

    luas = Pi * r * (r + s);
    volume = 1.0 / 3 * Pi * r * r * t;

    cout << "Luas Kerucut = " << luas << endl;
    cout << "Volume Kerucut = " << volume << endl;

    system("pause");

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    string motor[6] = {"Vario", "Mio", "Beat", "NMAX", "PCX", "Scoopy"};
    
    cout << "Menampilkan secara manual" << endl;
    cout << "motor : " << motor[0] << endl;
    cout << "motor : " << motor[1] << endl;
    cout << "motor : " << motor[2] << endl;
    cout << "motor : " << motor[3] << endl;
    cout << "motor : " << motor[4] << endl;
    cout << "motor : " << motor[5] << endl;
    
    cout << "\nMenampilkan dengan menggunakan for " << endl;
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "motor : " << motor[i] << endl;
    // }

    for (auto i : motor)
    {
        cout << "motor : " << i << endl;
    }
    system("pause");
    return 0;
}
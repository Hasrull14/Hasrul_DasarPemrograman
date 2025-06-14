#include <iostream>
using namespace std;
int main()
{
    string motor[2][3] = {{"Vario", "Mio","Beat"},{"NMAX","PCX", "Scoopy"}};
    
    cout << "Menampilkan secara manual" << endl;
    cout << "motor : " << motor[0][0] << endl;
    cout << "motor : " << motor[0][1] << endl;
    cout << "motor : " << motor[0][2] << endl;
    cout << "motor : " << motor[1][0] << endl;
    cout << "motor : " << motor[1][1] << endl;
    cout << "motor : " << motor[1][2] << endl;
    
    cout << "\nMenampilkan dengan menggunakan for " << endl;
    for (int i = 0; i < 2; i++){
        cout << "motor : ";
        for(int j = 0; j < 3; j++) {
            cout<< motor[i][j]<<" ";
        }cout<<endl;
    }
    system("pause");
    return 0;
}

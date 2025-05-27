#include <iostream>
using namespace std;

int main(){

    int grade;

    cout << "Inputkan grade: ";
    cin >> grade;

    switch (grade){
        case 85:
            cout << "Luar biasa!" << endl;
            break;
        case 70:
        case 60:
            cout << "Bagus!" << endl;
            break;
        case 50:
            cout << "Anda lulus" << endl;
            break;
        case 40:
        case 30:
            cout << "Anda remidi" << endl;
            break;
        default:
            cout << "Gak Lulos!" << endl;
    }

    system("pause");
    return 0;
}
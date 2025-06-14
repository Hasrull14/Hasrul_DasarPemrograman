#include <iostream>
using namespace std;

int suhu = 25;

void tampil(){
    int suhu = 100;
    cout << "Suhu : " << suhu << " derajat" << endl;
}

int main(){
    tampil(); //100
    cout << "Suhu : " << suhu << " derajat" << endl; //25

    system("pause");
    return 0;
}

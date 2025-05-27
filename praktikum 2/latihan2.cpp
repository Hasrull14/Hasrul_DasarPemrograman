#include <iostream>
using namespace std;

int main(){
    unsigned short int tahun_lahir, tahun_sekarang, usia;

    cout<<"masukkan tahun anda lahir = ";
    cin>>tahun_lahir;

    cout<<"masukkan tahun sekarang = ";
    cin>>tahun_sekarang;

    usia = tahun_sekarang-tahun_lahir;

    cout<<"Tahun Lahir = "<<tahun_lahir<<endl;
    cout<<"Tahun Sekarang "<<tahun_sekarang<<endl;
    cout<<"Usia anda sekarang = "<<usia<<" tahun"<<endl;

    system("pause");
    
    return 0;
}
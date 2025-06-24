#include <iostream> 
using namespace std;

//1. implementasi struct
struct kategoriSapi
{
    string id;
    string jenis;
    float berat;
    char jenisKelamin;
};
int harga (kategoriSapi temp) {
    return temp.berat * 120000;
};

//2. implementasi class
class kategoriSapiClass
{
    public : 
        string id;
        string jenis;
        float berat;
        char jenisKelamin;
        int harga () {
            return berat * 120000;
        };
};

kategoriSapi sapiStruct;
kategoriSapiClass sapiClass;

int main() {
    
    //pengisian struct
    sapiStruct.id = "001";
    sapiStruct.jenis = "brahman";
    sapiStruct.berat = 800;
    sapiStruct.jenisKelamin = 'l';

    //pengisian class
    sapiClass.id = "002";
    sapiClass.jenis = "limosin";
    sapiClass.berat = 950;
    sapiClass.jenisKelamin = 'l';


    //manampilkan struct
    cout<<"Menampilkan Struct"<<endl;
    cout<<"ID : "<<sapiStruct.id<<endl;
    cout<<"Jenis : "<<sapiStruct.jenis<<endl;
    cout<<"Berat : "<<sapiStruct.berat<<endl;
    cout<<"Jenis Kelamin : "<<sapiStruct.jenisKelamin<<endl;
    cout<<"Harga : Rp."<<harga(sapiStruct)<<endl;

    //menampilkan class
    cout<<"\nMenampilkan Class"<<endl;
    cout<<"ID : "<<sapiClass.id<<endl;
    cout<<"Jenis : "<<sapiClass.jenis<<endl;
    cout<<"Berat : "<<sapiClass.berat<<endl;
    cout<<"Jenis Kelamin : "<<sapiClass.jenisKelamin<<endl;
    cout<<"Harga : Rp."<<sapiClass.harga()<<endl;

    system("pause");
    return 0;
}
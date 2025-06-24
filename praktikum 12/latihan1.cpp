#include <iostream>
using namespace std;
struct mahasiswa
{
    string nama;
    int usia;
    string hobi[2];
    float ipk;
};
int main()
{
    mahasiswa mhs[2];
    mhs[0].nama = "Andi";
    mhs[0].usia = 21;
    mhs[0].ipk = 3.5;
    mhs[0].hobi[0] = "Renang";
    mhs[0].hobi[1] = "Futsal";

    mhs[1].nama = "Budi";
    mhs[1].usia = 20;
    mhs[1].ipk = 4.0;
    mhs[1].hobi[0] = "Piano";
    mhs[1].hobi[1] = "Kaligrafi";

    //menampilkan
    for(int i = 0; i<2;i++){
        cout<<"\nData "<<i+1<<endl;
        cout<< "nama = "<<mhs[i].nama<<endl;
        cout<< "usia = "<<mhs[i].usia<<endl;
        cout<< "ipk = "<<mhs[i].ipk<<endl;
        cout<< "hobi 1 = "<<mhs[i].hobi[0]<<endl;
        cout<< "hobi 2 = "<<mhs[i].hobi[1]<<endl;
    }

    system("pause");
    return 0;
}
#include <iostream> 
using namespace std;
struct buku {
    string judul;
    int harga;
    string author;
    string tahun;
    string artVersion[2];
};

buku komik;
int main() {
    
    //pengisian struct
    komik.judul = "One Punch Man";
    komik.harga = 50000;
    komik.author = "One";
    komik.tahun = "2009";
    komik.artVersion[0] = "One";
    komik.artVersion[1] = "Yusuke Murata";

    //Menampilkan struct
    cout<<"Data Buku"<<endl;
    cout<<"Judul : "<<komik.judul <<endl;
    cout<<"Harga : "<<komik.harga <<endl;
    cout<<"Tahun : "<<komik.tahun <<endl;
    cout<<"author : "<<komik.author <<endl;
    cout<<"Art Versi 1 : "<<komik.artVersion[0]<<endl;
    cout<<"Art Versi 2 : "<<komik.artVersion[1]<<endl;

    system("pause");
    return 0;
}
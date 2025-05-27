#include <iostream> 
#include <fstream>
using namespace std;

int main() {
    string baris;

    //membuka file dalam mode menulis
    ofstream tulisfile;

    //menunjuk ke sebuah nama file
    tulisfile.open("contohpercobaan2.txt");

    cout<<">= Menulis file, untuk keluar ketik huruf q "<<endl;
    
    //unlimited loop untuk menulis
    while(true){
        cout<<"- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin,baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if(baris=="q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        tulisfile<<baris<<endl;
    }
    //selesai dalam menulis file sekarang tutup filenya
    tulisfile.close();

    //membuka file dalam mode membaca
    ifstream bacafile;

    //menunjuk ke sebuah file
    bacafile.open("contohpercobaan2.txt");

    cout<<endl<<">= Membuka dan membaca file "<<endl;
    //jika file ada maka
    if(bacafile.is_open()){
        //melakukan perulangan setiap baris
        while(getline(bacafile,baris)){
            //dan tampilkan di sini
            cout<<baris<<"\n";
        }
        //tutup file tersebut dan selesai
        bacafile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout<<"tidak dapat membuka file";

    system("pause");
    return 0;
}
#include <iostream> 
#include <fstream>
using namespace std;

int main() {
    string baris;
    int i,n,k,data_temp,total;

    //membuka file dalam mode menulis
    ofstream tulisfile;

    //menunjuk ke sebuah nama file
    tulisfile.open("data_penjualan.txt");

    cout<<">= Menulis file data_penjulan.txt, untuk data penjualan "<<endl;

    cout<<"Masukkan panjang data pendapatan : ";
    cin>>n;
    int data[n];
    
    i=1;
    do{
        cout<<"input pendapatan hari ke-"<<i<<" : ";
        cin>>baris;
        tulisfile<<baris<<endl;
        i++;
    }while(i<=n);

    //selesai dalam menulis file sekarang tutup filenya
    tulisfile.close();



    //membuka file dalam mode membaca
    ifstream bacafile("data_penjualan.txt");;

    //menunjuk ke sebuah file
    // bacafile.open("data_penjualan.txt");

    cout<<"\n>= Membuka dan membaca file, data_penjualan.txt "<<endl;
    //jika file ada maka
    if(bacafile.is_open()){
        //melakukan perulangan untuk pengisian array setiap barisnya
        k=0;
        while(getline(bacafile,baris)){
            //dan tampilkan di sini
            data_temp = stoi(baris);
            data[k] = data_temp;
            k++;
        }

        //menampilkan array data dan menjumlahkan total pendapatan
        total = 0;
        for(i=0;i<n;i++){
            cout<<"pendapatan hari ke-"<<i+1<<" : "<<data[i]<<endl;
            total += data[i];
        }
        cout<<"total pendapatan adalah "<<total<<endl;

        //cek apakah total pendapatan sama / di atas umr
        if(total >= 2500000){
            cout<<"Pendapatan anda di atas umr kab. Kediri"<<endl;
        } else {
            cout<<"Pendapatan anda kurang dari umr kab. kediri"<<endl;
        }

        //tutup file tersebut dan selesai
        bacafile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout<<"tidak dapat membuka file";



    //menuliskan total pendapatan ke file total_penjualan
    //menunjuk ke sebuah nama file
    tulisfile.open("total_penjualan.txt");

    cout << "\n>= Menulis file total_penjualan.txt, untuk total penjualan" << endl;

    tulisfile << total << endl;
    // selesai dalam menulis file sekarang tutup filenya
    tulisfile.close();

    system("pause");
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

const int maxs = 5;
int main()
{
    string baris, file[maxs];
    int top = 0;
    int i, n, k, data_temp, total, pilih, no;
    char status;

    // membuka file dalam mode menulis
    ofstream tulisfile;

    // membuka file dalam mode membaca
    ifstream bacafile;

    cout << "Masukkan panjang data pendapatan : ";
    cin >> n;
    int data[n];

    do
    {
        cout << "\nDaftar Menu" << endl;
        cout << "\n[1] Input Data";
        cout << "\n[2] Tampilkan Data";
        cout << "\n[3] Tulis File";
        cout << "\n[4] membaca File";
        cout << "\n[5] Keluar dari program";

        cout << "\nPilih Menu : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            i = 0;
            do
            {
                cout << "input pendapatan hari ke-" << i << " : ";
                cin >> data[i];
                i++;
            } while (i < n);
            break;
        case 2:
            cout << "Pendapatan\n";
            for (i = 0; i < n; i++)
            {
                cout << "pendapatan hari ke-" << i + 1 << " = " << data[i] << endl;
            }
            break;
        case 3:

        do{

            cout << "buat nama file : ";
            cin >> file[i];
            top++;
            cout<<"tambah lagi ? (y/n) : ";
            cin>>status;
        }while(status == 'y'&&top<maxs);
            
            // menunjuk ke sebuah nama file
            cout<<top<<endl;
            cout<<"pilih file"<<endl;  
            for(i=0;i<top;i++){
                cout<<"["<<i+1<<"] "<<file[i]<<endl;
            }
            cout<<"pilih nomor file : ";
            cin>>no;

            tulisfile.open(file[no-1]+".txt");
            cout << ">= Menulis file data_penjulan.txt, untuk data penjualan " << endl;

            for (i = 0; i < n; i++)
            {
                tulisfile << data[i] << endl;
            }

            // selesai dalam menulis file sekarang tutup filenya
            tulisfile.close();
            break;
        case 4:
            // menunjuk ke sebuah file
            bacafile.open("data_penjualan.txt");

            cout << "\n>= Membuka dan membaca file, data_penjualan.txt " << endl;
            // jika file ada maka
            if (bacafile.is_open())
            {
                // melakukan perulangan untuk pengisian array setiap barisnya
                k = 0;
                while (getline(bacafile, baris))
                {
                    // dan tampilkan di sini
                    data_temp = stoi(baris);
                    data[k] = data_temp;
                    k++;
                }

                // menampilkan array data dan menjumlahkan total pendapatan
                total = 0;
                for (i = 0; i < n; i++)
                {
                    cout << "pendapatan hari ke-" << i + 1 << " : " << data[i] << endl;
                    total += data[i];
                }
                cout << "total pendapatan adalah " << total << endl;

                // tutup file tersebut dan selesai
                bacafile.close();
            }
            // jika tidak ditemukan file maka akan menampilkan ini
            else
                cout << "tidak dapat membuka file";
            break;

        default:
            cout << "pilihan tidak ada" << endl;
        }

    } while (pilih != 5);

    // menuliskan total pendapatan ke file total_penjualan
    // menunjuk ke sebuah nama file
    tulisfile.open("total_penjualan.txt");

    cout << "\n>= Menulis file total_penjualan.txt, untuk total penjualan" << endl;

    tulisfile << total << endl;
    // selesai dalam menulis file sekarang tutup filenya
    tulisfile.close();

    system("pause");
    return 0;
}
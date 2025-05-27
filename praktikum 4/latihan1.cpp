#include <iostream> 
using namespace std;

int main() {
    int n,hasil_modulo;
    float hasil,a,b;
    
    cout<<"Masukkan nilai a : ";
    cin>>a;
    cout<<"Masukkan nilai b : ";
    cin>>b;

    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Modulus"<<endl;

    cout<<"Masukkan Pilihan : ";
    cin>>n;

    switch (n) {
    case 1:
    hasil = a+b;
        cout<<"Hasil Penjumlahan : "<<hasil<<endl;
        break;
    case 2:
    hasil = a-b;
        cout<<"Hasil Pengurangan : "<<hasil<<endl;
        break;
    case 3:
    hasil = a*b;
        cout<<"Hasil Perkalian : "<<hasil<<endl;
        break;
    case 4:
    hasil = a/b;
        cout<<"Hasil Pembagian : "<<hasil<<endl;
        break;
    case 5:
    hasil_modulo = (int) a % (int) b;
        cout<<"Hasil Modulus : "<<hasil_modulo<<endl;
        break;
    default:
        cout<<"Pilihan Tidak ada"<<endl;
        break;
    }

    system("pause");
    return 0;
}




// (int)a dan (int)b mengonversi a dan b menjadi integer sebelum dihitung modulusnya.

// hasil_modulus bertipe int untuk menampung hasil operasi %, karena hasil modulus tidak akan berupa desimal.
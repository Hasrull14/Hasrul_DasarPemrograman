#include <iostream> 
using namespace std;

int main() {
    int usia;
    float tinggi;

    cout<<"Masukkan usia anak : ";
    cin>>usia;

    cout<<"Masukkan tinggi anak dalam cm : ";
    cin>>tinggi;

    if(usia >= 4&&usia<=5){
        cout<<"Masuk wahana balita ";
        if(tinggi<100){
            cout<<"type A"<<endl;
        }else{
            cout<<"type B"<<endl;
        }
    } else if(usia >=6&&usia<=10){
        cout<<"Masuk wahana anak ";
        if(tinggi<150){
            cout<<"type A"<<endl;
        }else{
            cout<<"type B"<<endl;
        }
    }

    cin.get();
    return 0;
}
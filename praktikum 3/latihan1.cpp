#include <iostream> 
using namespace std;

int main() {
    int num;

    cout<<"Masukkan sebuah nilai : ";
    cin>>num;

    if(num>=0){
        cout<<"Nilai tetap : "<<num<<endl;
    }else {
        num*=num;
        cout<<"Nilai berubah : "<<num<<endl;
    }

    system("pause");
    return 0;
}
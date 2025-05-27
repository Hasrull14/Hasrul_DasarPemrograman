#include <iostream> 
using namespace std;

int main() {
    int i,j,k,jml;

    cout<<"Masukkan jumlah perulangan = ";
    cin>>jml;

    // for(i=1;i<=jml;i++){
    //     //cout<<i<<" ";
    //     for(j=1;j<=jml;j++){
    //         if(j<=i){
    //             cout<<"* "; 
    //         }else{
    //             cout<<" "; //untuk segitiga siku siku kanan
    //         }
            
    //     }
    //     cout<<endl;
    // }

    // for(i=1;i<=jml;i++){
    //     //cout<<i<<" ";
    //     for(j=jml;j>0;j--){
    //         if(j<=i){
    //             cout<<"* ";
    //         }else{
    //             cout<<" ";//spasi 2 segitiga siku siku kanan, spasi 1 segitiga sama kaki
    //         }
            
    //     }
    //     cout<<endl;
    // }

    //menggabungkan 3 perulangan
    //untuk segitiga sama kaki dengan puncak 1 maka modifikasi k=2
    for(i=1;i<=jml;i++){
        //cout<<i<<" ";
        for(j=jml;j>0;j--){
            if(j<=i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        for(k=2;k<=jml;k++){
            if(k<=i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    system("pause");
    return 0;
}
#include <iostream> 
using namespace std;
int main() {
    int i,j,k,jml;

    cout<<"Masukkan jumlah perulangan = ";
    cin>>jml;
    
    for(i=1;i<=jml;i++){
        for(j=jml;j>0;j--){
            if(j<=i){
                cout<<"* ";
            }else{
                cout<<"- ";
            }
        }
        for(k=2;k<=jml;k++){
            if(k<=i){
                cout<<"* ";
            }else{
                cout<<"- ";
            }
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}


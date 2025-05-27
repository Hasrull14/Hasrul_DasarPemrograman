#include <iostream>
using namespace std;

int main()
{
    string username = "admin", password = "12345", temp_username, temp_password;

    int i=1;
    do{
        cout << "Masukkan Username : ";
        cin >> temp_username;

        cout << "Masukkan Password : ";
        cin >> temp_password;

        if (temp_username == username){
            if (temp_password == password){
                cout << "Selamat anda berhasil login" << endl;
                break;
            }else{
                cout<<"Mohon maaf password anda salah, login tidak berhasil"<<endl;
                i++;
            }
        } else {
            cout<<"Mohon maaf username anda salah, login tidak berhasil"<<endl;
            i++;
        }

        if(i>3){
            cout<<"percobaan anda sudah 3 kali, anda tidak dapat login "<<endl;
        }
    }while(i<=3);

   system("pause");
    return 0;
}
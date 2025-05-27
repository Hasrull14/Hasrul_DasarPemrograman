#include <iostream>
using namespace std;

int main()
{
    string username = "admin", password = "12345", temp_username, temp_password;
    bool status = false;

    int i=1;
    do{
        cout << "Masukkan Username : ";
        cin >> temp_username;

        cout << "Masukkan Password : ";
        cin >> temp_password;

        if (temp_username == username){
            if (temp_password == password){
                cout << "Selamat anda berhasil login" << endl;
                status = true;
            }else{
                cout<<"Mohon maaf password anda salah, login tidak berhasil"<<endl;
            }
        } else {
            cout<<"Mohon maaf username anda salah, login tidak berhasil"<<endl;
        }

        i++;
    }while(!status&&i<=3); //status = false; (true && i<=3) || status = true; (false && i<=3) break

    if(!status){  // //status = false; (true)
        cout<<!status<<endl;
        cout<<"percobaan anda sudah 3 kali, anda tidak dapat login "<<endl;
    }

   system("pause");
    return 0;
}

//status == true ➜ perbandingan nilai (relasional)
// !status ➜ kebalikan dari nilai status (logika)
// Keduanya bisa dipakai tergantung konteks, tapi !status sering lebih ringkas untuk cek kondisi negatif (false)
#include <iostream>
using namespace std;

string username = "admin", password = "12345", temp_username, temp_password;
bool status = 0;

string login(string name, string pass) {
    if (name == username) {
        if (pass == password) {
            status = 1;
            return "Selamat anda berhasil login";
        }
        else {
            return "Mohon maaf, login tidak berhasil";
        }
    }
    else {
        return "Mohon maaf, login tidak berhasil";
    }
}


int main() {
    int i;
    string hasil;

    i = 0;
    do {
        cout << "\nMasukkan Username : ";
        cin >> temp_username;

        cout << "Masukkan Password : ";
        cin >> temp_password;

        hasil = login(temp_username, temp_password);
        cout<<hasil<<endl;
        i++;
    } while (i < 3 && status == 0);

    
    if(status == 0){
        cout<<"anda gagal login 3 kali "<<endl;
    }

    system("pause");
    return 0;
}
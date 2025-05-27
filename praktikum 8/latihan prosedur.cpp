#include <iostream>
using namespace std;

string username = "admin", password = "12345", temp_username, temp_password;
bool status = 0;

void login(string name, string pass) {
    if (name == username) {
        if (pass == password) {
            cout << "Selamat anda berhasil login" << endl;
            status = 1;
        }
        else {
            cout << "Mohon maaf, login tidak berhasil" << endl;
        }
    }
    else {
        cout << "Mohon maaf, login tidak berhasil" << endl;
    }
}

int main() {
    int i = 0;

    do {
        cout << "\nMasukkan Username : ";
        cin >> temp_username;

        cout << "Masukkan Password : ";
        cin >> temp_password;

        login(temp_username, temp_password);
        i++;
    } while (i < 3 && status == 0);

    if(status == 0) {
        cout<<"anda gagal login 3 kali "<<endl;
    }

    system("pause");
    return 0;
}
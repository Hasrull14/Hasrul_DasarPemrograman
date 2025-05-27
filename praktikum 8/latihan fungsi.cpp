#include <iostream>
using namespace std;

string username = "admin", password = "12345", temp_username, temp_password;
bool status = 0;

int login(string name, string pass)
{
    if (name == username)
    {
        if (pass == password)
        {
            cout << "Selamat anda berhasil login" << endl;
            status = 1;
            return 1;
        }

        else
        {
            cout << "Mohon maaf, login tidak berhasil" << endl;
            return -1;
        }
    }
    else
    {
        cout << "Mohon maaf, login tidak berhasil" << endl;
        return -1;
    }
}


int main()
{
    int i, hasil;

    i = 0;
    cout<<!status<<endl;
    do
    {
        cout << "\nMasukkan Username : ";
        cin >> temp_username;

        cout << "Masukkan Password : ";
        cin >> temp_password;

        hasil = login(temp_username, temp_password);
        i++;
    } while (i < 3 && status == 0);

    
    if(hasil == -1){
        cout<<"anda gagal login 3 kali "<<endl;
    }

    system("pause");
    return 0;
}
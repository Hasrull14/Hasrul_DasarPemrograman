#include <iostream>
#include <ctime>

using namespace std;

int main2(){
    time_t timestamp = time(NULL);
    time(&timestamp);

    cout<<ctime(&timestamp);

    cin.get();
    return 0;
}

int main(){
    struct tm datetime;
    time_t timestamp;

    int year;

    cout<<"masukkan tahun lahir";cin>>year;

    datetime.tm_year = year - 1900;
    datetime.tm_mon = 12-1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;


    datetime.tm_isdst = -1;
    
    timestamp = mktime(&datetime);

    
    cout<<ctime(&timestamp);

    cout<<"ngor";
    cin.get();
    return 0;
}
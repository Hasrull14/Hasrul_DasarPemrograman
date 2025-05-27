#include <iostream> 
using namespace std;

int main() {
    int nilai = 20;

    while(nilai <= 10){
        cout<<"while-do dilakukan"<<endl;
    }

    do{
        cout<<"do-while dilakukan"<<endl;
    }while(nilai<=10);

    cin.get();
    return 0;
}
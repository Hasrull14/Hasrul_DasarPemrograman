#include <iostream> 
using namespace std;

int main() {
    int i;

    for(i=1;i<=5;i++){
        cout<<i<<" ";
    }
    cout<<i<<" "<<endl;

    i=1;
    while(i<=5){
        cout<<i<<" ";
        i++;
    }
    cout<<i<<" "<<endl;

    cin.get();
    return 0;
}
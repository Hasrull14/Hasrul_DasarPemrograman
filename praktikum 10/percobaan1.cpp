#include <iostream> 
using namespace std;

int main() {
    int n = 5, *p;

    p = &n;
    cout<<"n   = "<<n<<endl;
    cout<<"&n  = "<<&n<<endl;
    cout<<"*&n = "<<*&n<<endl;
    cout<<"p   = "<<p<<endl;
    cout<<"*p  = "<<*p<<endl;
    cout<<"&p  = "<<&p<<endl<<endl;

    *p = 7;

    cout<<"n  = "<<n<<endl;
    cout<<"&n = "<<&n<<endl;
    cout<<"p  = "<<p<<endl;
    cout<<"*p = "<<*p<<endl;

    delete p;

    system("pause");
    return 0;
}
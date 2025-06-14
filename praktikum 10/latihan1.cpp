#include <iostream>
using namespace std;

struct rangkai {
    int data;
    rangkai *next;
};

rangkai *r1, *bantu, *hapus, *head, *tail;

int main(){
    int i,angka;
    //input linked list
    for (i=0;i<10;i++){
        cout << "masukkan data : ";
        cin >> angka;
        
        r1 = new rangkai;
        r1->data = angka;
        r1->next = NULL;
        
        if(head == NULL){
            head = r1;
        } else {
            tail = head;
            while(tail->next != NULL){
                tail = tail->next;
            }
            tail->next = r1;
        }
    }


    //menampilkan linked list
    
    bantu = head;
    cout << "Data : " ;
    while(bantu != NULL){
        cout << bantu->data <<" ";
        bantu = bantu->next;
    }cout <<endl;
    
    
    //hapus semua node menghindari memory leak
     while(r1!=NULL){
         hapus = r1;
         r1 = r1->next;
         hapus->next = NULL;
         delete hapus;
     }   

    system("pause");
    return 0;
}
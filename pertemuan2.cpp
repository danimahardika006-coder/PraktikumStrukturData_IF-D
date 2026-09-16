#include <iostream>
using namespace std;
 
int main(){
    int nilai = 90;
    cout << "Nilai = " << nilai << endl;
    cout << "Alamat memori dari nilai = " << &nilai << endl;

    cout << endl;

    int *ptr = &nilai; // ptr menyimpan alamat memori dari variabel nilai
    cout << "Isi pointer ptr = " << *ptr << endl;
    cout << "Isi alamat pointer ptr = " << ptr << endl;

    cout << endl;

    *ptr = 80;
    cout << "Isi pointer ptr setelah diubah = " << *ptr << endl;
    cout << "Isi nilai setelah diubah melalui pointer = " << nilai << endl;

    cout << endl;

    int *ptrnull = nullptr; // pointer null
    if(ptrnull != nullptr){
        cout << *ptrnull << endl;
    } else {
        cout << "Pointer kosong" << endl;
    }
}
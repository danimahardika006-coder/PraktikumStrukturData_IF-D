#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

Mahasiswa mhs;

void inputData(Mahasiswa *mhs, int jumlah);
void tampilData(const Mahasiswa *mhs, int jumlah);
int cariNIM(const Mahasiswa *mhs, int jumlah, string nim);

int main(){
    int jumlah;
    cout << "Masukkan jumlah data yang mau diinput: ";
    cin >> jumlah;
    if(jumlah <= 0) {
        return 0;
    }
    Mahasiswa *mhs = new Mahasiswa[jumlah];
    inputData(mhs, jumlah);
    tampilData(mhs, jumlah);
    
    string nim;
    cout << "Cari NIM: ";
    cin >> nim;
    int posisi = cariNIM(mhs, jumlah, nim);
    cout << posisi << endl;
}

void inputData(Mahasiswa *mhs, int jumlah){
    for(int i = 0; i < jumlah; i++){
        cout << "Masukkan nama: "; getline(cin, mhs->nama);
        cout << "Masukkan NIM: "; getline(cin, mhs->nim);
        cout << "Masukkan IPK: "; cin >> mhs->ipk; cin.ignore();
    }
}

void tampilData(const Mahasiswa *mhs, int jumlah){
    for(int i = 0; i < jumlah; i++){
        cout << i << endl;
        cout << mhs->nama << endl;
        cout << mhs->nim << endl;
        cout << mhs->ipk << endl;
    }
}

int cariNIM(const Mahasiswa *mhs, int jumlah, string nim){
    for(int i = 0; i < jumlah; i++){
        if(mhs[i].nim == nim){
            cout << "Mahasiswa ditemukan endl";
        }
    }
}
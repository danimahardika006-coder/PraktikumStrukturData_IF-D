#include <iostream>
using namespace std;

// Buat struct node
struct Node{
    int data;
    Node* next;
};

void bacaMaju(Node *head);
void sisipNode(Node *&head, int nilai);
void hapusNode(Node *&head, int nilai);
void sisipDepan(Node *&head, int nilai);

int main(){
    Node *head = nullptr;

    sisipNode(head, 67);
    sisipNode(head, 89);
    sisipNode(head, 45);
    sisipNode(head, 99);
    
    cout << "Tampilan list: ";
    bacaMaju(head);
    sisipDepan(head, 15);
    hapusNode(head, 45);
    cout << "List setelah dihapus dan disisipkan: ";
    bacaMaju(head);

    
}

void bacaMaju(Node *head){
    Node *bantu = head;

    while (bantu != nullptr){
        cout << bantu->data << ", ";
        bantu = bantu->next;
    }
    cout << endl;
}

void sisipNode(Node *&head, int nilai){
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = nullptr;

    // cek list kosong
    if (head == nullptr){
        head = baru;
        return;
    }

    Node *bantu = head;
    while (bantu->next != nullptr){
        bantu = bantu->next;
    }
    bantu->next = baru;
}

void sisipDepan(Node *&head, int nilai){
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = head;

    head = baru;
}

void hapusNode(Node *&head, int nilai){
    if(head == nullptr){
        return;
    }

    if(head->data == nilai){
        Node *hapus = head;
        head = head->next;
        delete hapus;
        return;
    }

    Node *bantu = head;
    if(bantu->next == nullptr){     // data tidak ditemukan
        return;
    }

    while(bantu->next != nullptr && bantu->next->data != nilai){
        bantu = bantu->next;
    }
    Node *hapus = bantu->next;
    bantu->next = hapus->next;
    delete hapus;
}
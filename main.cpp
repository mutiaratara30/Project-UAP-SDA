#include <iostream>
using namespace std;


struct Stack {
    string data[10];
    int top = -1;
    void push(string isi) { data[++top] = isi; }
    void tampil() {
        cout << "\nRiwayat Aktivitas" << endl;
        for (int i = top; i >= 0; i--) cout << data[i] << endl;
    }
};

Stack riwayat;
riwayat.push("Input nilai Arifatul");
riwayat.push("Input nilai Mutiara");
riwayat.push("Ubah nilai Mutiara");
riwayat.tampil();

struct Queue {
    string data[10];
    int depan = 0, belakang = -1;
    void enqueue(string isi) { data[++belakang] = isi; }
    void tampil() {
        cout << "\n Antrian Revisi Nilai" << endl;
        for (int i = depan; i <= belakang; i++) cout << data[i] << endl;
    }
};

Queue antrian;
antrian.enqueue("Revisi nilai Mutiara");
antrian.enqueue("Revisi nilai Tamam");
antrian.enqueue("Revisi nilai Aldion");
antrian.tampil();



    return 0;
}
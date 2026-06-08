#include <iostream>
using namespace std;

int main() {

void ubahNilai(Mahasiswa *mhs, float nilaiBaru) {
    mhs->setNilai(nilaiBaru);
}

struct Stack {
    string data[10];
    int top = -1;

    void push(string isi) {
        top++;
        data[top] = isi;
    }

    void tampil() {
        cout << "\n=== Riwayat Aktivitas ===" << endl;
        for (int i = top; i >= 0; i--) {
            cout << data[i] << endl;
        }
    }
};
    return 0;
}
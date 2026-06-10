#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string npm;
    string nama;
    float nilai;
public:
    Mahasiswa(string n = "", string nm = "", float nl = 0) {
        npm = n;
        nama = nm;
        nilai = nl;
    }
    void tampil() {
        cout << npm << " | " << nama << " | " << nilai << endl;
    }
    float getNilai() { return nilai; }
    string getNama() { return nama; }
    void setNilai(float n) { nilai = n; }
};

Mahasiswa dataMhs[5];
int jumlah = 0;

void tambahMahasiswa(string npm, string nama, float nilai) {
    dataMhs[jumlah] = Mahasiswa(npm, nama, nilai);
    jumlah++;
}

void tampilData() {
    cout << "\n=== Data Mahasiswa ===" << endl;
    for (int i = 0; i < jumlah; i++) {
        dataMhs[i].tampil();
    }
}

struct Transaksi {
    string npm;
    float nilaiLama;
    float nilaiBaru;
};

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

struct Queue {
    string data[10];
    int depan = 0;
    int belakang = -1;
    void enqueue(string isi) {
        belakang++;
        data[belakang] = isi;
    }
    void tampil() {
        cout << "\n=== Antrian Revisi Nilai ===" << endl;
        for (int i = depan; i <= belakang; i++) {
            cout << data[i] << endl;
        }
    }
};

int main() {
    tambahMahasiswa("2557071005", "Arifatul", 85);
    tambahMahasiswa("2507071001", "Mutiara", 80);
    tambahMahasiswa("2557071016", "Tamam", 90);
    tambahMahasiswa("2557071011", "Aldion", 75);
    tampilData();

    Mahasiswa *p = &dataMhs[1];
    ubahNilai(p, 88);
    cout << "\nSetelah nilai Mutiara diubah:" << endl;
    tampilData();

    Transaksi t1;
    t1.npm = "2507071001";
    t1.nilaiLama = 80;
    t1.nilaiBaru = 88;
    cout << "\n=== Data Transaksi ===" << endl;
    cout << "NPM        : " << t1.npm << endl;
    cout << "Nilai Lama : " << t1.nilaiLama << endl;
    cout << "Nilai Baru : " << t1.nilaiBaru << endl;

    Stack riwayat;
    riwayat.push("Input nilai Arifatul");
    riwayat.push("Input nilai Mutiara");
    riwayat.push("Ubah nilai Mutiara");
    riwayat.tampil();

    Queue antrian;
    antrian.enqueue("Revisi nilai Mutiara");
    antrian.enqueue("Revisi nilai Tamam");
    antrian.enqueue("Revisi nilai Aldion");
    antrian.tampil();

    return 0;
}
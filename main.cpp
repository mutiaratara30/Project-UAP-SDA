#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string npm, nama;
    float nilai;
public:
    Mahasiswa(string n = "", string nm = "", float nl = 0) {
        npm = n; nama = nm; nilai = nl;
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
    dataMhs[jumlah++] = Mahasiswa(npm, nama, nilai);
}

void tampilData() {
    cout << "\n Data Mahasiswa" << endl;
    for (int i = 0; i < jumlah; i++) dataMhs[i].tampil();
}

int main() {
    tambahMahasiswa("2557071005", "Arifatul", 85);
    tambahMahasiswa("2507071001", "Mutiara", 80);
    tambahMahasiswa("2557071016", "Tamam", 90);
    tambahMahasiswa("2557071011", "Aldion", 75);
    tampilData();
    return 0;
}
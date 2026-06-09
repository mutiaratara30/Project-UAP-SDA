struct Transaksi {
    string npm;
    float nilaiLama, nilaiBaru;
};

void ubahNilai(Mahasiswa *mhs, float nilaiBaru) {
    mhs->setNilai(nilaiBaru);
}

Mahasiswa *p = &dataMhs[1];
ubahNilai(p, 88);
cout << "\nSetelah Nilai Mutiara Diubah" << endl;
tampilData();

Transaksi t1 = {"2507071001", 80, 88};
cout << "\n Data Transaksi" << endl;
cout << "NPM        : " << t1.npm << endl;
cout << "Nilai Lama : " << t1.nilaiLama << endl;
cout << "Nilai Baru : " << t1.nilaiBaru << endl;
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
int main() {
    

    return 0;
}
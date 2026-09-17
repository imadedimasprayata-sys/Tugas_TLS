#include <iostream>
using namespace std;

int main () {
    int n, k;
    cout << "masukkan jumalah astronout : ";
    cin >> n;
    cout << "astronout pertama yang tereliminasi : ";
    cin >> k;
    cout << endl;

    int lingkaran[100000]; 
    int sisa_astronaut = n;

    for (int i = 0; i < n; i++) {
        lingkaran[i] = i + 1;
    }

    for (int i = 0; i < sisa_astronaut; i++) {
        cout << lingkaran[i] << endl;
    }
    cout << endl;

    int posisi = 0; 
    while (sisa_astronaut > 1) {
        
        posisi = (posisi + k - 1) % sisa_astronaut;
        int nomor_tereliminasi = lingkaran[posisi]; 

        for (int i = posisi; i < sisa_astronaut - 1; i++) {
            lingkaran[i] = lingkaran[i + 1];
        }
        
        sisa_astronaut--;
        for (int i = 0; i < sisa_astronaut; i++) {
            cout << lingkaran[i] << endl;
        }
        cout << endl;
        if (nomor_tereliminasi % 2 == 0) {
            k = k + 2;
        } else {
            k = k - 1;
        }
        if (k < 2) {
            k = 2;
        }
    }

    return 0;
}
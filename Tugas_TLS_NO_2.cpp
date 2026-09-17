#include <iostream>
using namespace std;

int main() {
    char pesan[100]; 
    
    cout << "Masukkan pesan (Gunakan Huruf Kapital): ";
    cin >> pesan;
    
    cout << "Maka proses sandi nya: ";

    if (pesan[0] != '\0') {
        cout << pesan[0];
    }
    
    for (int i = 1; pesan[i] != '\0'; i++) {
     
        int nilai_sekarang = pesan[i] - 'A' + 1;
        int nilai_sebelumnya = pesan[i - 1] - 'A' + 1;
        
        int nilai_baru = nilai_sekarang + nilai_sebelumnya;
        nilai_baru = (nilai_baru - 1) % 26 + 1;
        
        char huruf_baru = 'A' + nilai_baru - 1;
 
        cout << huruf_baru;
    }
    
    cout << endl;
    
    return 0;
}
#include <iostream>
#include <cmath>
#include "aritmatika.h"

using namespace std;

int main()
{
    float Pruang, Lruang;
    float Pkursi, Lkursi, jarak;
    int b, a, n, Un, MAX;

    cout << "Masukkan Panjang Ruangan : ";
    cin >> Pruang;
    cout << "Masukkan Lebar Ruangan : ";
    cin >> Lruang;

    cout << "\nMasukkan Panjang Kursi : ";
    cin >> Pkursi;
    cout << "Masukkan Lebar Kursi : ";
    cin >> Lkursi;
    cout << "Tentukan Jarak Antar Kursi : ";
    cin >> jarak;

    cout << "\nTentukan banyak bangku baris pertama : ";
    cin >> a;
    cout << "Tentukan selisih bangku setiap baris : ";
    cin >> b;

    n = floor(Pruang / (Pkursi + jarak));
    MAX = floor(Lruang / (Lkursi + jarak));
    Un = a + (n-1) * b;

    cout << "Jumlah baris bangku maksimal yang mungkin (n) : " << n << endl;
    cout << "Sehingga :" << endl;

    if (Un > MAX){
        cout << "[ERROR] Jumlah bangku baris terakhir melebihi kapasitas ruangan !" << endl;
    } else {
        cout << "\nJumlah bangku maksimal ialah (iteratif) : " << totalBangku(a, b, n) << endl;
        cout << "\nJumlah bangku maksimal ialah (rekursif) : " << jumlahBangku(a, b, n) << endl;
    }

    return 0;
}

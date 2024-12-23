#include "aritmatika.h"

int totalBangku(int a, int b, int n){
    int totalKursi = 0;

    while(n > 0){
        totalKursi += a + (n-1) * b;
        n--;
    }

    return totalKursi;
}

int jumlahBangku(int a, int b, int n){
    if (n == 1){
        return a;
    }
    return (a + (n-1) * b) + jumlahBangku(a, b, n-1);
}

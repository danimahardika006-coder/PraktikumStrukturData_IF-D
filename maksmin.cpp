#include <iostream>
using namespace std;

void cariMinMax(int deret[], int ukuran, int* min, int* max) {
    if (ukuran <= 0) return;

    *min = deret[0];
    *max = deret[0];

    for (int i = 1; i < ukuran; i++) {
        if (deret[i] < *min) {
            *min = deret[i];
        }
        if (deret[i] > *max) {
            *max = deret[i];
        }
    }
}

int main() {
    int angka[] = {45, 12, 89, 2, 77, 34, -5, 61};
    int ukuran = sizeof(angka) / sizeof(angka[0]);

    int min = 0;
    int max = 0;

    cout << "--- Sebelum Fungsi Dipanggil ---" << endl;
    cout << "Nilai min = " << min << endl;
    cout << "Nilai max = " << max << endl;

    cariMinMax(angka, ukuran, &min, &max);

    cout << "\n--- Setelah Fungsi Dipanggil ---" << endl;
    cout << "Nilai terkecil (min) = " << min << endl;
    cout << "Nilai terbesar (max) = " << max << endl;

    return 0;
}
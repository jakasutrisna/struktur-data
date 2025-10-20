#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Loop untuk membandingkan elemen
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika urutan salah
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void tampilkanArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int data[] = {45, 22, 89, 12, 5, 30};
    int jumlah = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan:\n";
    tampilkanArray(data, jumlah);

    bubbleSort(data, jumlah);

    cout << "Data setelah diurutkan (ascending):\n";
    tampilkanArray(data, jumlah);

    return 0;
}

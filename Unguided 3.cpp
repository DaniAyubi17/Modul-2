#include <iostream> 
using namespace std; 
 
int main() { 
    const int arr_size = 5; 
    int arr[arr_size]; 
    int sum = 0; 
    int max_val = INT_MIN; 
    int min_val = INT_MAX; 
    float avg = 0.0; 
    int choice; 
     
    cout << "Masukkan " << arr_size << " angka: " << endl; 
    for (int i = 0; i < arr_size; i++) { 
        cin >> arr[i]; 
        sum += arr[i]; 
        if (arr[i] > max_val) { 
            max_val = arr[i]; 
        } 
        if (arr[i] < min_val) { 
            min_val = arr[i]; 
        } 
    } 
     
    avg = static_cast<float>(sum) / arr_size; 
     
    cout << "Pilih operasi yang ingin dilakukan: " << endl; 
    cout << "1. Cari nilai maksimum" << endl; 
    cout << "2. Cari nilai minimum" << endl; 
    cout << "3. Cari nilai rata-rata" << endl; 
    cin >> choice; 
     
    switch (choice) { 
        case 1: 
            cout << "Nilai maksimum: " << max_val << endl; 
            break; 
        case 2: 
            cout << "Nilai minimum: " << min_val << endl; 
            break; 
        case 3: 
            cout << "Nilai rata-rata: " << avg << endl; 
            break; 
        default: 
            cout << "Pilihan tidak valid" << endl; 
            break; 
    } 
     
    return 0; 
}
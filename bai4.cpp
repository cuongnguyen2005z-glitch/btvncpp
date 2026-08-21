// Bài 4:
// Nhập số nguyên dương n và 1 chữ số k (từ 0 đến 9).
// Dùng vòng lặp while đếm xem chữ số k xuất hiện bao nhiêu lần trong n, in ra kết quả.

#include <iostream>
using namespace std;

int main() {
    long n;
    int k, dem = 0;

    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap k (0-9): ";
    cin >> k;
    while (n > 0) {
        int chuSo = n % 10;
        if (chuSo == k) {
            dem++;
        }
        n = n / 10;
    }
    cout << "So lan xuat hien cua " << k << " la: " << dem;
    return 0;
}
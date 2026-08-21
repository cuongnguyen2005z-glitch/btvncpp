// Bài 6:Nhập số nguyên dương n. Số hoàn hảo là số bằng tổng các ước của nó (không kể chính nó).
// Tính tổng các ước của n rồi in ra kết luận n có phải số hoàn hảo hay không.
#include <iostream>
using namespace std;

int main() {
    long n;
    long tong = 0;

    cout << "Moi nhap n: ";
    cin >> n;

    for (long i = 1; i < n; i++) {
        if (n % i == 0) {
            tong = tong + i;
        }
    }
    if (tong == n) {
        cout << n << " la so hoan hao";
    }
    else {
        cout << n << " khong phai la so hoan hao";
    }
    return 0;
}
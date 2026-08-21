//#include<bits/stdc++.h> (Thư viện tổng hợp)
//---------Mức cơ bản-------
// Bài 3:
// Nhập số nguyên dương N. In ra tất cả các số chính phương (1, 4, 9, 16, 25, ...) không vượt quá N.
// Các số in trên cùng 1 dòng, cách nhau bởi dấu cách.

// Cách 1:
 #include <iostream>
 using namespace std;

int main(){
    long n;
    cout << "Moi nhap n: ";
    cin >> n;
    for (long i = 1; i*i <= n; i++){
        long soChinhPhuong = i * i;
        cout << soChinhPhuong << " " << endl;
    }
    return 0;
}

// Cách 2:
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     long n;
//     cout << "Moi nhap n: ";
//     cin >> n;

//     long can = sqrt(n);

//     for (long i = 1; i <= can; i++){
//         cout << i * i << " " << endl;
//     }

//     return 0;
// }


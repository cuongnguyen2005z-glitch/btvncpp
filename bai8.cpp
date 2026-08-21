#include <iostream>
using namespace std;

int main() {
    float gia, tongTien = 0, giaMax = 0;
    int soMon = 0;
    char tiepTuc;

    do {
        cout << "Moi nhap gia mon hang: ";
        cin >> gia;

        soMon++;
        tongTien = tongTien + gia;

        if (gia > giaMax) {
            giaMax = gia;
        }

        cout << "Con mua nua khong? (c/k): ";
        cin >> tiepTuc;

    } while (tiepTuc == 'c');

    cout << "So mon da mua: " << soMon << endl;
    cout << "Tong tien phai tra: " << tongTien << endl;
    cout << "Gia mon dat nhat: " << giaMax << endl;

    return 0;
}
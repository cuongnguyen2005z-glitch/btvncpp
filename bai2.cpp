#include <iostream>
using namespace std;

int main(){
    int nhietdoST, nhietdoEND, buocnhay;
    cout << "Moi nhap nhiet do bat dau: " << endl;
    cin >> nhietdoST;

    cout << "Moi nhap nhiet do ket thuc: " << endl;
    cin >> nhietdoEND;

    cout << "Moi nhap buoc nhay: " << endl;
    cin >> buocnhay;
    float F;
    for (int C = nhietdoST; C <= nhietdoEND; C += buocnhay){
        F = C * 9.0 / 5 + 32;
        cout << C << " do do C = " << F << " do F" << endl;
    }
    return 0;
}
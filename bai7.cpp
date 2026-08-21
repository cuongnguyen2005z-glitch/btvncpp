// Bài 7:Nhập số nguyên dương n. Lặp lại quy tắc sau cho đến khi n = 1:
// nếu n chẵn thì gán n = n / 2, nếu n lẻ thì gán n = 3 * n + 1.
// Đếm và in ra số bước đã thực hiện.
#include <iostream>
using namespace std;

int main()
{
    int n, dem = 0;

    cout << "Moi nhap n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "n khong phai so nguyen duong" << endl;
    }
    else
    {
        while (n != 1)
        {
            cout << "n la: " << n << endl;
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = 3 * n + 1;
            }

            dem++;
        }
        cout << "n la: " << n << endl;
        cout << "So buoc = " << dem << endl;
    }

    return 0;
}
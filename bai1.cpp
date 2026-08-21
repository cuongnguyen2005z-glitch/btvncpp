#include <iostream>
using namespace std;

int main()
{
    int n, i, tong = 0;
    cout << "Moi nhap n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            tong = tong + i;
            cout << "Tong cac so chan tu 1 den " << n << " la: " << tong << endl;
        }
    }
    return 0;
}
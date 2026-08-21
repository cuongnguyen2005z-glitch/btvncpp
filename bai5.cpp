#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, i, dau = 1;

    cout << "Moi nhap n: ";
    cin >> n;

    float S = 0;

    for (i = 1; i <= n; i++)
    {
        S = S + dau * (1.0 / i);
        dau = -dau;
    }
    cout << "S = " << fixed << setprecision(4) << S << endl;
    return 0;
}
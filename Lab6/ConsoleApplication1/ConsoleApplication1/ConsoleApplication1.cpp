#include <iostream>
#include <cmath>

using namespace std;

double formula(double Number, double korin, int tocnist) {
    double obch = Number;

    for (int i = 0; i < tocnist; i++) {
        obch = (1 / korin) * (Number / pow(obch, korin - 1) + (korin - 1) * obch);
    }
    return obch;
}

int main()
{
    double a;
    int n;
    double k1 = 3;
    double k2 = 6;
    double k3 = 7;
    cout << "a: ";
    cin >> a;
    cout << "n: ";
    cin >> n;

    if (a > 0) {
        double pidraxunok = (formula(a, k1, n) - formula(a * a + 1, k2, n)) / (1 + formula(3 + a, k3, n));
        cout << pidraxunok;

    }
}

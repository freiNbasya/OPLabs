#include <iostream>
#include <cmath>

using namespace std;

int factorial(int j)
{
    if (j == 0) return 1;
    else return j * factorial(j - 1);
}
int main()
{
    int j;
    int x;
    int S;
    int a;
    int a_pred;
    int i;
    int n;
    
    cin >> x;
    if (x >= 0 && x <= 5) {
        n = 0;
        i = 2 * n;
        a = 1;
        a_pred = a;
        S = a;
            while (abs(a - a_pred) < 0.0001)
            {
               
                n = n + 1;
                i = 2 * n;
                a_pred = a;
                a = pow(-1, n) * pow(x, 2 * n) / factorial(i);
                if (n % 2 == 0) {
                    S = S + a;
                }
            }
            cout << S;
    }
    else { cout << ("X не належить проміжку"); }

}


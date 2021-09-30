
#include <iostream>

using namespace std;


int main()
{
	int a, d, n;
	cin >> a;// вводимо номер першого члену
	cin >> d; // вводимо різницю
	cin >> n; // вводимо номер n-ого члену
	cout << a + (n - 1) * d;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	float x;
	int n;
	float y;
	float yPred;
	float a;

	cin >> x;
	cin >> a;
	cin >> n;
	if (x > 0 && n >= 0 && a > 0) {
		y = a;
		
		for (int i = 0; i < n; i++) {
			yPred = y;
			y = 0.5 * (yPred + (x / yPred));
		}
			cout << y << endl;
	}
		
}



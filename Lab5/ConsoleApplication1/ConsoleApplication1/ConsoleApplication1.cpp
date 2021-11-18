#include <iostream>

using namespace std;

int get_digit(int number, int digit_position) {
    int j;
    for (j = 1; j <= digit_position - 1; j++) {
        number /= 10;
            }
    return number % 10;
}
    
int main() {
    int n, n_copy, n_s, is_polynome, i;
    int digits_count;
    for (n = 1; n <= 100; n++) {
        digits_count = 0;
        is_polynome = 1;
        n_copy = n;
        while (n_copy >= 1) {
            n_copy /= 10;
            digits_count++;
        }
        for (i = 0; i < digits_count / 2; i++) {
            if (get_digit(n, (digits_count - i)) != get_digit(n, (1 + i))) {
                is_polynome = 0;
                break;
            }
        }
        if (is_polynome == 1) {
            n_s = n * n;
            n_copy = n_s;
            
            digits_count = 0;
            while (n_copy >= 1) {
                n_copy /= 10;
                digits_count++;
            }
            for (i = 0; i < digits_count / 2; i++) {
                if (get_digit(n_s, digits_count - i) != get_digit(n_s, 1 + i)) {
                    is_polynome = 0;
                    break;
                }
            }
            if (is_polynome == 1) {
                cout << n << endl;
            }
        }
    }
 
}
#include <iostream>

using namespace std;

int** bud_mass(int n){
    int** mass = new int* [n];
    for (int i = 0; i < n; ++i) {
        mass[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            mass[i][j] = (i + j) % n + 1;
        }
    }
    return mass;
}

int main() {
    int const n = 6;
   
    int** mass = bud_mass(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mass[i][j] << ' ';
        }
        cout << endl;
    }

 
}

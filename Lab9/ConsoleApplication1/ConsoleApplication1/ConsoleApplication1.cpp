#include <iostream>
#include <string>

using namespace std;

void findMatch(string ryadok, int n, char x, char y)
{
    for (int i = 0; i < n; i++) {

        if (ryadok[i] == x) {
            int j = i;
            cout << "Word: ";
            while (ryadok[j] != y) {
                cout << ryadok[j];
                j++;
            }
            cout << y << endl;
            i = j;
        }
    }
}

int main()
{
    string ryadok;
    getline(cin, ryadok);
    int n = ryadok.size();
    char x;
    char y;
    cin >> x;
    cin >> y;
    findMatch(ryadok, n, x, y);
    return 0;
}
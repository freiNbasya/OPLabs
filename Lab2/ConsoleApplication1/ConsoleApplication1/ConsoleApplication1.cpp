// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    
    cout << ("x: \n");
    cin >> x;
    cout << ("y: \n");
    cin >> y;
    
    if (x < 1 && x > -1) {
        double up = sqrt(4 - ((x - 1) * (x - 1)));
        double down = -sqrt(4 - ((x - 1) * (x - 1)));
        if (y<up && y>down) {
            cout << ("Point belongs to plane");
        }
        else {
            cout << ("Point doesn't belong to plane");

        }

    }
    else if (x >= 1 && x < 3) {
        double up = 3-x;
        double down = x-3;
        if (y < up && y > down) {
            cout << ("Point belongs to plane");
        }
        else {
            cout << ("Point doesn't belong to plane");
        }
    }
}

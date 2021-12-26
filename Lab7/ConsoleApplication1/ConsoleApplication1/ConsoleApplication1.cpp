#include <iostream>

using namespace std;

int bud_mass1(int C[6], int n) {
    int x = 0;
    int sered = 0;
    int k=0;
    srand((int)time(0));
    for (int i = 0; i < n; i++)
    {
        
            C[i] = rand() % 20-10;
            cout << " " << C[i] << " ";
            if (C[i] < 0)
            {
                 x += C[i];
                k++;
            }
    }
    sered = x / n;
    cout << endl << sered << endl;
    return sered;
}
void bud_mass2(int C[6], int N[6], int n, int sred) {

    for (int i = 0; i < n; i++)
    {


        N[i] = C[i];
        if (N[i] < 0)
        {
            N[i] = C[i] * sred;
        }




    }
    for (int k = 0; k < n; k++)
    {

        cout << " " << N[k] << " ";

    }

}

int main()
{
	int const roz = 6;
	int C[roz];
	int N[roz];
    int serednye = bud_mass1(C, roz);
    bud_mass2(C, N, roz, serednye);
    
}


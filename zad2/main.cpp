#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "Podaj wymiar tabliczki:" << endl;
    cin >> n;

    int ** tabliczka = new int*[n];
    for (int i=0; i<n; i++)
        tabliczka[i] = new int[n];

    cout << endl;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            tabliczka[i][j]=(i+1)*(j+1);
            cout << setw((n/10)*2+3) << tabliczka[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

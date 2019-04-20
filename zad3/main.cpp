#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    int n;

    do{
        cout << "Podaj liczbe naturalna:" << endl;
        cin >> n;
    } while (n<1);

    vector<list <int> > dzielniki;

    for (int i=1; i<=n; i++){
        int j=1;
        list <int> tmp;
        do{
            if (i % j == 0){
                tmp.push_back(j);
                if (j*j != i)
                    tmp.push_back(i/j);
            }
            j++;
        }while (j*j<=i);
        dzielniki.push_back(tmp);
    }

    
    cout << "Dzielniki:" << endl;
    for (int i=0; i<n; i++){
        cout << i+1 << ": ";
        for(list<int>::iterator it=dzielniki[i].begin(); it!=dzielniki[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }

    return 0;
}

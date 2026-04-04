#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vektori;
    int numri;

    for (int i = 0; i < vektori.size(); i++)
    {
        cout << "Vendoseni nje numer: " << endl;
        cin >> numri;

        if(numri == -1) {
            break;
        } else {
            vektori.push_back(numri);
        }
    }

    int minimum = vektori[0];

    for (int i = 0; i < vektori.size(); i++)
    {
        if (vektori.at(i) < minimum)
        {
            minimum = vektori.at(i);
        }
        
    }

    cout << "Vektori minimum eshte: " << minimum;
}

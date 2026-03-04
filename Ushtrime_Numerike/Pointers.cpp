#include <iostream>
#include <cmath>
using namespace std;

void faktorieli(int n, int *rez) {
    int f = 1;
    for(int i = n; i> 0; i--) {
        f *= i;
    }

    *rez = f;

    cout << f;
}

int main() {
    /*int numri = 10;
    int *ptr_numri;
    ptr_numri = &numri; // Ruan adresen*/

    //Pointeri i Dyfishte:

    /*float a = 10;

    float *pointer_a = &a;
    float **ptr2 = &pointer_a;

    cout << "Vlera e a permes pointer_a eshte: " << *pointer_a << endl;

    **ptr2 = 11;
    cout << "Vlera e a-se eshte: " << a << endl;*/

    int f;
    int *result;

    faktorieli(10, result);

    cout << result; 

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int shuma(int a, int b) {
    int c = 5;

    return a + b + c;
}
//pointers ndihmojne me ndrru vleren e adreses
//Operatori &
//Pointerat perdoren me rujt adresen.Shkruhet ni * perpara
int main() {
    int a = 10;
    int b = 11;

    int *pointerA = &a;

    shuma(a, b);

    return 0;
}
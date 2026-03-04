#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/*
int main() {
    const int n = 5;
    int Z[n] = {27,12,-23,9,35}, *pz;
    char vijat[]="------------------";
    cout << "\n Indeksi Anetari Adresa\n" << vijat << endl;
    for(int i = 0;i < n; i++) {
        pz = & Z[i];
        cout << setw(6) << i << setw(10) << Z[i] << setw(12) << pz + i << endl;
    }
    cout << vijat << "\n";
}*/

struct Pitja {
    string lloji;
    float siperfaqja;
    void Detajet() {
        cout << lloji << "Ka siperfaqe prej " << siperfaqja << "cm2. \n\n";
    }
};

void main() {
    Pitja p, *pointeri;
    pointeri = &p;
    (*pointeri).lloji = "Lakrori";
    (*pointeri).siperfaqja = 120;
    (*pointeri).Detajet();
}

//Algoritmi eshte procedure hap pas hapi per zgjidhjen e problemit
//Algoritmi eshte bashkesi e rregullave per kryerjen e llogaritjeve me dore ose me ndonje pajisje.
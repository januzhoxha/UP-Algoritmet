/*
a. [0.5 pikë] Të deklarohet një listë e cila mund të ruaj numra jo të plotë

b. [1 pikë] Të lexohen 6 numra jo të plotë nga tastiera

c. [1 pikë] Përgjatë leximit të numrave, nëse numri i lexuar është në rangun 2.0 – 2.9, numri të shtohet në fund të listës, në të kundërt numri të shtohet në fillim

d. [1.5 pikë] Pas mbushjes së listës me numra, të largohen nga lista vetëm numrat që gjenden në rangun 2.0 – 2.9 dhe të printohen numrat e larguar.

e. [1 pikë] Të printohen vlerat e mbetura brenda listës.
*/

/*
#include <list>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    list <double> numra = {};
    int numri;

    for (int i = 0; i < 6; i++)
    {
        cout << "Vendose nje numer: " << endl;   
        cin >>numri;
        numra.push_back(numri);

        if ((numri > 2.0) && ( numri < 2.9)) 
        {
            numra.push_back(numri);
        } else {
            numra.push_front(numri);
        }
    }

    cout << "Numrat e larguar: " << endl;

    for(auto it = numra.begin(); it != numra.end();) {
        if(*it > 2.0 && *it < 2.9) {
           cout << *it << " ";
           it = numra.erase(it); 
        } else {
            ++it;
        }
    }

    cout << "\n Numrat e mbetura: " << endl;

    for (auto x : numra)
    {
        cout << x << " ";
    }
    
}*/

/*/*
a. [0.5 pikë] Të deklarohet një listë që ruan numra jo të plotë

b. [1 pikë] Të lexohen 7 numra jo të plotë nga tastiera

c. [1 pikë] Gjatë leximit:
   - Nëse numri është negativ → shtohet në fund të listës
   - Nëse numri është pozitiv ose zero → shtohet në fillim të listës

d. [1.5 pikë] Pas mbushjes së listës:
   - Të largohen nga lista të gjithë numrat negativë
   - Dhe të printohen ata që u larguan

e. [1 pikë] Të printohet lista e mbetur

f. [BONUS 1 pikë] Të gjendet dhe printohet mesatarja e elementeve të mbetura
*/
/*
#include <list>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    list <double> numrat = {};
    const int n = 7;
    int numer;

    for (int i = 0; i < n; i++)
    {
        cout << "Vendose nje numer: "  << endl;
        cin >> numer;
        
        if(numer < 0) {
            numrat.push_back(numer);
        } else {
            numrat.push_front(numer);
        }
    }

    for (auto it = numrat.begin(); it != numrat.end();) {
        if(*it  < 0) {
            cout << *it << " ";
            it = numrat.erase(it);
        } else {
            ++it;
        }
    }

    double sum = 0;
    int counter = 0;

    for(auto x : numrat) {
        sum += x;
        counter++;
    }
    
    double mesatarja = sum / (int) counter;

    cout << "Mesatarja eshte: " << mesatarja << endl;

    return 0;
}*/

/*a. [2 pikë] Të definohet funksioni void printo(list l), i cili printon elementet brenda një liste të lidhur.

b. [5 pikë] Të definohet funksioni void modifiko, i cili pranon një listë me numra të plotë dhe një parametër tjetër të tipit karakter me emër operacioni.
 Në rast se vlera e parametrit operacioni është ‘F’, të largohet elementi i cili gjendet në fillim të listës së lidhur. 
 Në rast se vlera e parametrit operacioni është ‘B’, të largohet elementi i cili gjendet në fund të listës së lidhur.
Në rastin kur vlera e parametrit operacioni është ‘R’, të ndryshojë radhitja e elementeve nga fundi në fillim.

c. [1 pikë] Brenda funksionit main, të deklarohet një listë e lidhur e cila mund të ruaj numra të plotë dhe një variabël 
tjetër madhësia, që po ashtu ruan një numër të plotë.

d. [2 pikë] Të lexohet vlera e variablës madhësia nga tastiera, e cila përcakton se sa numra do të lexohen nga tastiera
dhe të shtohen brenda listës së lidhur.

e. [2 pikë] Pas mbushjes së listës së lidhur me vlera të thirret për secilin nga operatorët e mundshëm funksioni modifiko, 
ku pas secilit modifikim thirret edhe funksioni printo.*/
/*
#include <iostream>
#include <list>
#include <iomanip>
using namespace std;

void printo(list <int> l) {
    for (auto x: l) 
    {
        cout << x << endl;
    }
}

void modifiko(list <int> &numra, char operacioni) {
    if (operacioni == 'F')
    {
        numra.pop_front();
    } if(operacioni == 'B') {
        numra.pop_back();
    } if(operacioni == 'R') {
        numra.reverse();
    }
    
}

int main() {
    list <int> numra = {};
    int madhesia;
    int numri;
    char shkronja;

    cout << "Vendose nje vlere numerike: " << endl;
    cin >> madhesia;

    for(int i = 0; i < madhesia; i++) {
        cout << "Cfare vlere don qe te kete: " << endl;
        cin >> numri;
        numra.push_front(numri);
        cout << "Vendose nje shkronje, ose F, ose B ose R " << endl;
        cin >> shkronja;
    } 

    printo(numra);
    modifiko(numra, shkronja);
    

    return 0;
}*/
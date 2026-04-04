/*Detyra 1 ne kllk 1
2. [6 pikë] Të shkruhet një program në C++ që menaxhon një inventar të produkteve në një dyqan.
a. [1 pikë] Brenda funksionit main, Të deklarohet një varg me 10 anëtarë të tipit të plotë me emrin
sasiaProdukteve, ku çdo element përfaqëson sasinë në stok të një produkti të ndryshëm.
b. [1 pikë] Të deklarohet një pointer ptrSasia i cili si vlerë merr adresën e elementit të parë të vargut
sasiaProdukteve.
c. [2 pikë] Përmes pointerit ptrSasia, të zvogëlohet sasia e produktit të pestë në varg për 2 njësi.
d. [2 pikë] Të shtypen në ekran sasitë e përditësuara të të gjithë produkteve në inventar duke përdorur pointerin
ptrSasia*/

/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int N = 10;
    int sasiaProdukteve[N] = {1,2,3,4,5,6,7,8,9,10};

    int *ptrSasia = &sasiaProdukteve[0];

    *(ptrSasia + 4) -= 2;

    for (int i = 0; i < N; i++)
    {
       cout << *(ptrSasia + i) << " ";
    }
    
}*/

/*Detyra 2
Write a C++ program that manages an inventory of 12 products.
- Each product has a stock quantity stored in an array.
- Use a pointer to:
- Increase the stock of the 3rd product by 10 units.
- Decrease the stock of the 7th product by 5 units.
- Double the stock of the last product.
- Finally, print all updated quantities using only the pointer.
*/

/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int const N = 12;

    int sasiaProduktit[N] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int *sasiaPtr = &sasiaProduktit[0];

    *(sasiaPtr + 2) += 10;
    *(sasiaPtr + 6) -= 5;
    *(sasiaPtr + 11) *= 2;

    for (int i = 0; i < N; i++)
    {
        cout << *(sasiaPtr + i)<< " ";
    }
}*/

/*4. [5 pikë] Të shkruhet kodi sipas kërkesave në vijim:
a. [1 pikë] Të deklarohet nje numer jo i plote me emrin a.
b. [1 pikë] Të deklarohet një pointer, i cili si vlerë merr adresën e variablës a.
c. [1 pikë] Të deklarohet një pointer i dyfishtë, i cili në fillim është i pa-inicializuar.
d. [1 pikë] Përmes pointerit të dyfishtë t'i caktohet vlera variablës a, duke u nisur nga pikat paraprake të
detyrës.
e. [1 pikël Te printohet vlera e variablës a.*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a;

    double *pointer = &a;
    double **pointer2;

    

}
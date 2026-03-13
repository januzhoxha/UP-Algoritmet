/*Implementimi i një Regjistri Telefonik Dinamik
Zhvillimi i një aplikacioni interaktiv për menaxhimin e kontakteve nëpërmjet një ndërfaqeje në konsolë.

Klasat për Implementim
1. Contact
Përshkrimi: Përfaqëson një kontakt.
Fushat (publike):
name (string): Emri i kontaktit.
number (string): Numri i telefonit.
Konstruktori pa paramtera
Konstruktori me dy parametra name, number
2. Phonebook
Përshkrimi: Menaxhon një listë dinamike të kontakteve.
Fushat:
contacts: Një varg dinamik i objekteve Contact, privat dhe i alokuar dinamikisht.
name(string) - Emri i phonebook
Konstruktori: Pranon madhësinë fillestare të librit telefonik dhe emrin
Metodat:
addContact(name, number): Shton një kontakt të ri.
listContacts(): Liston kontaktet.
editContact(name, number): Ndryshon numrin e kontaktit.
findNumber(name): Gjen numrin për kontakt
Funksionaliteti Kryesor
Implementimi i një menyu interaktive për shtimin, modifikimin dhe listimin e kontakteve.

Menaxhimi i memorjes për të shmangur memory leak.

Shembull
Shtypni madhesin e phonebook: 100
Zgjidhni opsionin:
1 - fut
2 - azhuro
3 - listo
4 - perfundo
Sfida Shtesë
Implementimi i një sistemi për caktim dinamik të madhësisë së listës së kontakteve, duke eliminuar nevojën për përcaktimin e një madhësie fillestare.*/

#include <iostream>
#include <cmath>
using namespace std;

class Contact {
    public:
    string name;
    string number;

    Contact() {
        cout << "Keni mberri ne konstruktor!";
    }

    Contact(string name, string number) {
        this->name = name;
        this->number = number;
    }

};

class PhoneBook {
    int ngritja = 0;
    string name;

    PhoneBook(int ngritja, string name) {
        this->ngritja = ngritja;
        this->name = name;
    }

    void addContact(string name, int ngritja) {

    }
};

int main() {
    string output;

    cout << "Pershendetje, keni mberri tek nderfaqja e phonebook-it: keto jane opsionet zgjidheni njeren: "<< endl << "1 - Fut" <<
    endl << "2 - Azhuro" << endl << "3 - Listo" << endl << "4 - Perfundo" << endl;
    cin >> output;

    Contact c;
    PhoneBook ;

    return 0;
}
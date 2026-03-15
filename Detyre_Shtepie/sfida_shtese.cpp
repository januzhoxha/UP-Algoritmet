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
    private:
    Contact* contacts;
    int size;
    int count;
    string name;

    public:
    PhoneBook(int size, string name) {
        this->size = size;
        this->name = name;
        contacts = new Contact[size];
        count = 0;
    }

    ~PhoneBook() {
        delete[] contacts;
    }

    void addContact(string name, string number) {
        if(count < size) {
            contacts[count] = Contact(name, number);
            count++;
        } else {
            cout << "Phonebook is full!" << endl;
        }
    }

    void listContacts() {
        for(int i = 0; i < count; i++) {
            cout << contacts[i].name << " | " << contacts[i].number << endl;
        }
    }

    void editContacts(string name, string newNumber) {
        for (int i = 0; i < count; i++)
        {
            if (contacts[i].name == name)
            {
                contacts[i].number = newNumber;
                cout << "Numri u azhurua!" << endl;
                return;
            }
        }
        cout << "Kontakti nuk u gjet!" << endl;
    }

    void findNumber(string name) {
        for(int i = 0; i < count; i++) {
            if (contacts[i].name == name)
            {
                cout << "Numri juaj eshte: " << contacts[i].number << endl;
            }
        }
        cout << "Kontakti nuk u gjet!" << endl;
    }
};

int main() {
    PhoneBook pb(100, "My Phonebook");
    int option;

    return 0;
}
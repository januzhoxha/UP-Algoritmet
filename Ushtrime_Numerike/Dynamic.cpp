#include <iostream>
using namespace std;

class Contact {
    public:
    string name;
    string number;

    Contact(string name, string number){
        this->name = name;
        this->number = number;
    }

    Contact() {
        cout << "U kriju nje kontakt";
    }
};

class PhoneBook {
    string name;
    Contact contacts[5];
};

int main() {
    //int *ptr_1;//Ski vlere
    //int *ptr_1 = nullptr; //Ki vleren nullptr
    int *ptr_2 = new int;

    cout << "Vlera ku pointon ptr_2:" << *ptr_2 << endl;

    int array1[] = {1,2,3,4};
    
    cout << "Vlera ku pointon array1:" << *array1 << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Anetari " << i + 1 << " " << *(array1 + i) << " ";
    }

    int size;
    cout << "Vendosni numrin e kontakteve qe doni te ruani: ";
    cin >> size;

    cout << "Zgjidhni opsionin: \n 1-fut \n 2-edit \n 3-listo \n 4-perfundo";

    return 0;
}
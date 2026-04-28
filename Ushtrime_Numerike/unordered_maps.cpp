/*
#include <iostream>
#include <unordered_map>
#include <stack>
#include <iomanip>
using namespace std;

int main() {
    stack<int> s;
    unordered_map<int, string> studentet;

    studentet[213567] = "Jon";
    studentet[123456] = "Kron";
    studentet[321435] = "Lisa";

    for(auto it = studentet.begin(); it != studentet.end(); it++) {
        cout << "Id: " << it->first;
        cout << "Name: " << it->second << "\n";
    }

    cout << "Vendosni id-ne e studentit qe deshironi te ";
    int id;
    cin >> id;

    cout << "Vlera e ruajtur: " << studentet[id];
    
    return 0;
}*/

#include <iostream>
#include <iomanip>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> notat;
    notat[10] = "Jon";
    notat[6] = "Ismet";
    notat[9] = "Lisa";

    for (auto it = notat.begin(); it != notat.end(); it++)
    {
        cout << "Emri: " << it->first << endl;
        cout << "Notat: " << it->second << endl;
    }
    
    cout << "Vendoseni emrin e studentit qe deshironi: " << endl;
    string emri;
    cin >> emri;

    cout << "Emri i ruajtur eshte: " << endl;
    return 0;
}
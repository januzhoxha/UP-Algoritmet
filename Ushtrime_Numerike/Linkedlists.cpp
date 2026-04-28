#include <list>
#include <iostream>
using namespace std;
/*
int main() {
    list <int> numra = {};
    int numri;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter a number: " << endl;
        cin >> numri;

        if ((numri >= 2.0) && (numri <= 2.9))
        {
            numra.push_back(numri);   
        } else {
            numra.push_front(numri);
        }
    }
}*/

void print(list<int> l) {
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }   
}

void modifiko(list<int> l, char o) {
    switch(o)
    {
        case 'B':
            l.pop_back();
            break;
        case 'F':
            l.pop_front();
            break;
        case 'R':
            l.reverse();
            break;
    }
}

int main() {
    int n;
    cout << "Sa numra don me i rujt: ";
    cin >> n;

    list<int> l;

    for(int i = 0; i < n; i++) {
        int x; 
        cout << "Vendosni vleren: ";
        cin >> x;
        l.push_back(x);
    }

    modifiko(l, 'B');
    print(l);
}


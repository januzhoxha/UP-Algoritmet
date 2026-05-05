#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Studenti {
    private:

    string emri;
    string drejtimi;
    vector <int> notat = {};

    public:

    Studenti(string emri, string drejtimi, vector <int> notat) {
        this->emri = emri;
        this->drejtimi = drejtimi;
        this->notat = notat;
    }

    void shtoNoten(int n) {
        if((n >= 5) && (n <= 10)) {
            notat.push_back(n);
        } else {
            cout << "Vlera e notave duhet te jete prej 5 deri 10" << endl;
        }
    }

    double mesatarja() {
        int sum = 0;
        int heresi = notat.size();
        for (int i = 0; i < notat.size(); i++)
        {
            sum += notat.at(i);
        }

        double m = (double) sum / heresi;
        return m;
    }
};

int main() {
    vector <int> grades = {};
    Studenti s("Januz", "IKS", grades);
    int nota;

    for (int i = 0; i < 6; i++)
    {
        cout << "Vendose nje note: " << endl;
        cin >> nota;
        s.shtoNoten(nota);
    }

    double mesatarja = s.mesatarja();
    
    cout << "Mesatarja e notave eshte: " << mesatarja << endl;
}
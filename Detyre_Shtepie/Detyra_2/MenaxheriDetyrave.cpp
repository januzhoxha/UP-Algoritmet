/*a. Të definohet klasa MenaxheriDetyrave që përmban një listë të lidhur të strings. Të implementohet metoda shtoDetyre
(const string& detyra) për shtimin e detyrave në fund të listës.

b. Të implementohet metoda hiqDetyre(const string& fjaleKyce) për heqjen e detyrave që përmbajnë fjalen kyçe të dhënë, 
dhe shfaqDetyrat() për të printuar të gjitha detyrat në listë.

c. Në main(), të krijohet një instancë e MenaxheriDetyrave, të lexohet numri i detyrave dhe të shtohen përmes metodës shtoDetyre. 
Pas shtimit, të kërkohet një fjale kyçe për heqjen e detyrave përkatëse dhe të shfaqen detyrat e mbetura.*/

#include <iostream>
#include <list>
#include <string>
using namespace std;

class MenaxheriDetyrave {
private:
    list<string> detyrat;

public:
    void shtoDetyre(const string& detyra) {
        detyrat.push_back(detyra);
    }

    void hiqDetyre(const string& fjaleKyce) {
        for (auto it = detyrat.begin(); it != detyrat.end();) {
            if (it->find(fjaleKyce) != string::npos) {
                it = detyrat.erase(it);
            } else {
                ++it;
            }
        }
    }

    void shfaqDetyrat() {
        for (const auto& d : detyrat) {
            cout << d << endl;
        }
    }
};

int main() {
    MenaxheriDetyrave m;
    int n;
    cin >> n;
    cin.ignore();//Qe mos me pas probleme me types cin and getline//

    for (int i = 0; i < n; i++) {
        string detyra;
        getline(cin, detyra);
        m.shtoDetyre(detyra);
    }

    string fjaleKyce;
    getline(cin, fjaleKyce);

    m.hiqDetyre(fjaleKyce);

    m.shfaqDetyrat();

    return 0;
}
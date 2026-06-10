#include <unordered_map>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    unordered_map<string, int> ushqimi;

    string emriIProduktit;
    int sasiaEShitur;
    int shitjet;
    int counter = 0;
    double mesatare;

    const int n = 9;
    vector<string> emri = {"Buke", "Qumesht", "Buke", "Veze", "Qumesht", "Buke", "Veze", "Kafe", "Buke"};

    
    

    for (int i = 0; i < n; i++)
    {
        ushqimi[emri.at(i)]++;
    }

    
    for (auto x : ushqimi)
    {
        double mesatare = ((double) x.second) / n;
    }
    cout << mesatare << endl;


    for (auto x : ushqimi)
    {
        if(x.second > mesatare) {
            cout << x.second << endl;
        } 
    }

    for (auto x : ushqimi)
    {
        if (x.second < 2) {
            ushqimi.erase(x.first);
        }

        cout << x.first << " " << x.second << endl;
    }
    


    
    


    
    
    
}
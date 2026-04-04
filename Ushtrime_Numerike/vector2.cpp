#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> vargu, int x) {
    int mid = vargu.size() / 2;

    if (vargu.at(mid)==x) 
    {
        return true;
    }

    if (x < vargu.at(mid))
    {
        //pjesa e pare

        vector<int>p1;
        for (int i = 0; i < mid; i++)
        {
            p1.push_back(vargu.at(i));
        }
        return linearSearch(p1,x);
        
    }
    else {
         
    }
    
    

    return false;
}

int main() {

}
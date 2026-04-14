/*#include <iostream>
#include <stack>
using namespace std;

stack<int> krijoStack(int a, int b, int c) {
    stack<int> stp;

    while(stp.size() < a) {
        int x;
        cout << "Vendose nje nr: ";
        cin >> x;

        if (x > b && x < c)
        {
            stp.push(x);
        }
    }
    return stp;
}

int main() {
    stack<int> s = krijoStack(10,100,1000);
    cout << s.top();
    s.pop();
    cout << s.top();
    return 0;
}*/

#include <iostream>
#include <cmath>
#include <stack>
#include <iomanip>
using namespace std;

int stackEdges(stack<int> s, int &top){
    int rez = s.top();
    while (s.size() > 1)
    {
        s.pop();
    }
    
    return 0;
}

int main() {
    int top;
    int bottom = stackEdges(s, top);
}
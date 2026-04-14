#include <iostream>
#include <queue>
using namespace std;

void f1(queue<int> q, int& rezultati) {
    rezultati = q.back();
}

int main() {
    queue <int> q;
    q.push(10);
    q.push(3);
    q.push(5);

    int rez;
    f1(q,rez);

    cout << rez;

    return 0;
}
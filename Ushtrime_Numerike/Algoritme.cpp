//Big O//
#include <iostream>
#include <cmath>
#include <array>
using namespace std;


int main() {
    array<int, 10> arr = {1,3,4,5,6,7,8,9,2};
    int arr2[10];

    int s = 0;

    cout << arr[100];

    for (int i = 0; i < arr.size(); i++)
    {
        s += arr.at(i);
    }
    

    return 0;
}
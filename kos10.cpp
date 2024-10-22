#include <iostream>
using namespace std;

int main() {
    int x = 30;
    int y = 50;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // swap x and y
    int temp = x;
    x = y;
    y = temp;

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}

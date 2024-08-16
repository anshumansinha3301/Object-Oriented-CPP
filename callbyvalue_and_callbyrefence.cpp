#include <iostream>
using namespace std;

void callByValue(int x) {
    x = 20;
}

void callByReference(int &x) {
    x = 20;
}

int main() {
    int a = 10;
    int b = 10;

    callByValue(a);
    cout << "a = " << a << endl;

    callByReference(b);
    cout << "b = " << b << endl;

    return 0;
}

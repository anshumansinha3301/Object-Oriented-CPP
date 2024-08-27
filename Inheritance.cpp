#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Some sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Meow" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    d.sound();
    c.sound();
    return 0;
}

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor called. Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    // Method to display person details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object of Person using parameterized constructor
    Person person1("Anshuman", 21);
    person1.display();

    return 0;
}

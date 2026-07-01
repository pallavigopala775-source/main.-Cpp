#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1;

    p1.name = "pallavi";
    p1.age = 19;

    p1.display();

    return 0;
}

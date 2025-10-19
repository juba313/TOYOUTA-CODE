#include <iostream>
#include <string>
using namespace std;

class Color {
public:
    string name;
    string shade;
};

class Car {
public:
    string brand;
    Color color;   // Has-a relationship

    void show() {
        cout << "Brand: " << brand << endl;
        cout << "Color: " << color.name<< endl;
    }
};

int main() {
    Car c1;
    c1.brand = "TOYOUTA";
    c1.color.name = "WHITE";
    

    c1.show();
    return 0;
}
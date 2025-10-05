#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    float price;
    int mileage;

    Car(string b, string m, float p, int mi) {
        brand = b;
        model = m;
        price = p;
        mileage = mi;
    }
};

int main () {
    Car car1("Toyota", "Corolla", 20000, 5000);
    cout << "Car 1: " << car1.brand << " " << car1.model << ", Price: $" << car1.price << ", Mileage: " << car1.mileage << " MPG" << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Shape {
    protected:
       string color;
    public:
        Shape(string c) {
            color = c;
        }
        setColor(string c) {
            color = c;
        }
        string getColor() {
            return color;
        }
};

class Rectangle : public Shape {
    private:
        float length;
        float width;
    public:
        Rectangle(string c, float l, float w) : Shape(c) {
            length = l;
            width = w;
        }
        float area() {
            return length * width;
        }
        float perimeter() {
            return 2 * (length + width);
        }        
};

class Circle : public Shape {
    private:
        float radius;
    public:
        Circle(string c, float r) : Shape(c) {
            radius = r;
        }
        float area() {
            return 3.14 * radius * radius;
        }
        float circumference() {
            return 2 * 3.14 * radius;
        }        
};

int main() {
    Rectangle rect("Red", 10, 5);
    Circle circ("Blue", 7);

    cout << "Rectangle Color: " << rect.getColor() << ", Area: " << rect.area() << endl;
    cout << "Circle Color: " << circ.getColor() << ", Area: " << circ.area() << endl;

    return 0;
}

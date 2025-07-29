#include <iostream>
using namespace std;

class area {
    public:
    virtual float calculateArea() = 0; // Pure virtual function
};
class rectangle : public area {
    private:
    float length;
    float width;
    public:
    void setValues(float l, float w) {
        length = l;
        width = w;
    }
    float calculateArea() override{
        return length * width;
    }
};
class Square : public area{
    private:
    float side;
    public:
    void setValues(float s) {
        side = s;
    }
    float calculateArea() override {
        return side * side;
    }
};
class Circle : public area {
    private:
    float radius;
    public:
    void setValues(float r) {
        radius = r;
    }
    float calculateArea() override {
        return 3.14 * radius * radius; 
    }
};
int main() {
    cout << "Area Calculation" << endl << "----------------" << endl;
    rectangle r1;
    r1.setValues(5.0, 3.0);
    cout << "Area of Rectangle: " << r1.calculateArea() << endl;
    Square s1;
    s1.setValues(4.0);
    cout << "Area of Square: " << s1.calculateArea() << endl;
    Circle c1;
    c1.setValues(2.0);
    cout << "Area of Circle: " << c1.calculateArea() << endl;

    return 0;
}
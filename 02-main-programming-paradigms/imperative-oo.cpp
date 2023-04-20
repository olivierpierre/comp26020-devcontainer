/* To compile and run:
 * g++ listing3.cpp -o listing3
 * ./listing3
 */

#include <iostream>

using namespace std;

class Shape {

public:
    Shape(int id) : _id(id) {};
    virtual void printMe(void) = 0;

protected:
    int _id;
};

class Square : Shape {
public:
    Square(int id, int side) : Shape(id) { _side = side; }
    void printMe(void) {
        cout << "Square id: " << _id << ", side: " << _side << endl;
    }

private:
    int _side;
};

class Circle : Shape {
public:
    Circle(int id, int radius) : Shape(id) { _radius = radius; }
    void printMe(void) {
        cout << "Circle id: " << _id << ", radius: " << _radius << endl;
    }

private:
    int _radius;
};

int main(void) {
    Square mySquare = Square(42, 10);
    Circle myCircle = Circle(242, 12);

    mySquare.printMe();
    myCircle.printMe();
}

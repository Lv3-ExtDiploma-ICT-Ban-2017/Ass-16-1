#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class Shape {
public:
	virtual float getArea() const = 0;
};

class Rectangle : public Shape {
private:
	float width;
	float height;
	
public:
	Rectangle(float width, float height) : width(width), height(height) { }
	float getArea() const {return width * height;}
};

class Circle : public Shape {
private:
	float radius;
	
public:
	Circle(float radius) : radius(radius) {}
	float getArea() const {return 3.14159f * radius * radius;}
};

void printArea(const Shape& shape) {
	cout << "Area: " << shape.getArea() << endl;
}

int main() {
	
	Rectangle r(2,6);
	Shape* shape = &r;
	Circle c(5);
	Shape* shape = &c;
	
	printArea(r);
	printArea(c);
	printArea(*shape);
	
	return 0;
}

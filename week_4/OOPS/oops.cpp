#include <iostream>
using namespace std;
class Test {
public:
virtual int square(int x) = 0;
};
class Arithmetic : public Test {
public:
int square(int x) {
return x * x;
}
};
class ToTestInt {
public:
void display() {
Arithmetic obj;
int num = 5;
cout << "\nQuestion 1:" << endl;
cout << "Square of " << num << " = " << obj.square(num) << endl;
}
};
class Outer {
public:
void display() {
cout << "Display method of Outer Class" << endl;
}
class Inner {
public:
void display() {
cout << "Display method of Inner Class" << endl;
}
};
};
class Point {
private:
int x, y;
public:
Point() {
x = 0;
y = 0;
}
Point(int x, int y) {
this->x = x;
this->y = y;
}
void setX(int x) {
this->x = x;
}

void setY(int y) {
this->y = y;
}
void setXY(int x, int y) {
this->x = x;
this->y = y;
}
void display() {
cout << "Point(" << x << ", " << y << ")" << endl;
}
};
class Box {
protected:
double length, breadth;
public:
Box(double l, double b) {
length = l;
breadth = b;
}
double area() {
return length * breadth;
}
};
class Box3D : public Box {
private:
double height;

public:
Box3D(double l, double b, double h)
: Box(l, b) {
height = h;
}

double volume() {
return length * breadth * height;
}
};
int main() {
ToTestInt t;
t.display();
cout << "\nQuestion 2:" << endl;
Outer o;
o.display();

Outer::Inner i;
i.display();
cout << "\nQuestion 3:" << endl;
Point p1;
p1.display();
Point p2(10, 20);
p2.display();
p2.setX(30);
p2.setY(40);
p2.display();
p2.setXY(50, 60);
p2.display();
cout << "\nQuestion 4:" << endl;
double length, breadth, height;
cout << "Enter Length: ";
cin >> length;
cout << "Enter Breadth: ";
cin >> breadth;
cout << "Enter Height: ";
cin >> height;
Box3D b(length, breadth, height);
cout << "Area = " << b.area() << endl;
cout << "Volume = " << b.volume() << endl;

return 0;
}

#include <iostream>
#include <cmath>
using namespace std;


#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class PointType {
protected:
    double x, y;

public:
    PointType(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    void setPoint(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    double getX() const { 
        return x; 
    }
    double getY() const { 
        return y; 
    }

    void printPoint() const {
        cout << "Center Point: (" << x << ", " << y << ")" << endl;
    }
};

class CircleType : public PointType {
protected:
    double radius;

public:
    CircleType(double r = 0.0, double x = 0.0, double y = 0.0) : PointType(x, y) {
        radius = (r >= 0) ? r : 0;
    }

    void setRadius(double r) {
        radius = (r >= 0) ? r : 0;
    }

    double getRadius() const { 
        return radius; 
    }

    double area() const { 
        return M_PI * radius * radius; 
    }

    double circumference() const { 
        return 2*M_PI*radius; 
    }

    void printCircle() const {
        cout<< "Radius: "<< radius<< endl;
        cout<< "Circumference: "<< circumference()<< endl;
        cout<< "Area of base: "<< area()<< endl;
    }
};

class CylinderType : public CircleType {
private:
    double height;

public:
    CylinderType(double r = 0.0, double h = 0.0, double x = 0.0, double y = 0.0)
        : CircleType(r, x, y), height(h) {}

    void setHeight(double h) {
        height = (h >= 0) ? h : 0;
    }

    double getHeight() const { return height; }

    double volume() const {
        return area() * height;
    }

    double surfaceArea() const {
        return 2 * area() + circumference() * height;
    }

    void printCylinder() const {
        printPoint();
        printCircle();
        cout << "Height: " << height << endl;
        cout << "Surface Area: " << surfaceArea() << endl;
        cout << "Volume: " << volume() << endl;
    }
};

// Main function to test the classes
int main() {
    CylinderType cylinder(5.0, 10.0, 2.0, 3.0);

    cout << "Cylinder Details:" << endl;
    cylinder.printCylinder();

    cylinder.setRadius(7.0);
    cylinder.setHeight(12.0);
    cylinder.setPoint(4.0, 5.0);

    cout << "\nUpdated Cylinder Details:" << endl;
    cylinder.printCylinder();

    return 0;
}

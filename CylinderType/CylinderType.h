#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

#include "PointType.h"
#include "CircleType.h"

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

#endif

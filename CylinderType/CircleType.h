#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

#include "PointType.h"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

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

    double getRadius() const { return radius; }

    double area() const { return M_PI * radius * radius; }

    double circumference() const { return 2 * M_PI * radius; }

    void printCircle() const {
        cout << "Radius: " << radius << endl;
        cout << "Circumference: " << circumference() << endl;
        cout << "Area of base: " << area() << endl;
    }
};

#endif
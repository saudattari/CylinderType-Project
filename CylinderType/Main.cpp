#include "PointType.h"
#include "CircleType.h"
#include "CylinderType.h"
#include <iostream>
using namespace std;

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

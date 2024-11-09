#include "../include/joint.hpp"
#include <iostream>

using namespace std;

Joint::Joint(double x, double y) : x(x), y(y), sx(0), sy(0) {}
Joint::Joint(double x, double y, double sx, double sy) : x(x), y(y), sx(sx), sy(sy) {}
Joint::~Joint() {}

void Joint::addSpeed() {
    x += sx;
    y += sy;
}

void Joint::display() const {
    cout << "(" << x << ", " << y << ")";
}

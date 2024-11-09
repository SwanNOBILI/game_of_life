#include "../include/joint.hpp"
#include <iostream>

using namespace std;

Joint::Joint(float x0, float y0) : x(x0), y(y0) {}
Joint::~Joint() {}

void Joint::updatePos(float sx, float sy) {
    x += sx;
    y += sy;
}

void Joint::display() const {
    cout << "(" << x << ", " << y << ")";
}

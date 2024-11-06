#include "../include/joint.hpp"
using namespace std;

Joint::Joint(double x, double y) : x(x), y(y), sx(0), sy(0) {}

Joint::Joint(double x, double y, double sx, double sy) : x(x), y(y), sx(sx), sy(sy) {}

double Joint::distance(const Joint& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

void Joint::addSpeed() {
    x += sx;
    y += sy;
}

void Joint::display() const {
    cout << "(" << x << ", " << y << ")";
}

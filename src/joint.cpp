#include "../include/joint.hpp"

Joint::Joint(double x, double y) : x(x), y(y), sx(0), sy(0) {}

Joint::Joint(double x, double y, double sx, double sy) : x(x), y(y), sx(sx), sy(sy) {}

double Joint::distance(const Joint& other) const {
    return std::sqrt(std::pow(other.x - x, 2) + std::pow(other.y - y, 2));
}

void Joint::display() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

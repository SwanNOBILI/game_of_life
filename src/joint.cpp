#include "../include/joint.hpp"
#include <iostream>

using namespace std;

Joint::Joint(float x0, float y0) : x(x0), y(y0), sx(0), sy(0) {}
Joint::Joint(float x0, float y0, float sx0, float sy0) : x(x0), y(y0), sx(sx0), sy(sy0) {}
Joint::~Joint() {}

void Joint::updateSpeed(float sx0, float sy0){
    sx += sx0;
    sy += sy0;
}

void Joint::updatePosition(float dt) {
    x += sx * dt;
    y += sy * dt;
}

void Joint::display() const {
    cout << "Position = (" << x << ", " << y << ")" << "|| Speed = (" << sx << ", " << sy << ")" << endl;
}

#include "../include/link.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Link::Link(vector<Joint> j0) : joints(j0) {}
Link::~Link() {}

double Link::getSize() const {
    double size = 0;
    for (unsigned int i = 0; i < joints.size()-1; i++) {
        size += sqrt(pow(joints[i].x-joints[i+1].x, 2) + pow(joints[i].y-joints[i+1].y, 2));
    }
    return size;
}

void Link::display() const {
    cout << "Link -> ";
    for (unsigned int i = 0; i < joints.size(); i++) {
        cout << "Joint_" << i << " = "; 
        joints[i].display();
        if (i != joints.size()-1){
            cout << " & ";
        }
    }
    cout << endl;
}
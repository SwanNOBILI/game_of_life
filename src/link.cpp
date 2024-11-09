#include "../include/link.hpp"
#include <iostream>
#include <cmath>

using namespace std;

// Constructor & Destructor
Link::Link(vector<Joint> j0) {
    if (j0.size() != 2){
        throw invalid_argument("The vector needs to contain 2 Joint objects");
    }else{
        joints = j0;
    }
}
Link::~Link() {}



// Getter
float Link::getEuclideanNorm() const {
    double size = 0;
    for (unsigned int i = 0; i < joints.size()-1; i++) {
        size += sqrt(pow(joints[i].x-joints[i+1].x, 2) + pow(joints[i].y-joints[i+1].y, 2));
    }
    return (float)size;
}

vector<float> Link::getMotionVector(int i0) const {
    int i1 = (i0 + 1) % 2;    // select the second Joint
    vector<float> out;
    out.push_back(joints[i1].x-joints[i0].x);
    out.push_back(joints[i1].y-joints[i0].y);
    return out;
}



// Other
void Link::moveVoid(float sx, float sy) {
    for (unsigned int i = 0; i < joints.size(); i++) {
        joints[i].updatePos(sx, sy);
    }
}

void Link::moveLiquid(int i0, float sx, float sy) {
    if (i0 == 0 || i0 == 1){
        float current_length = getEuclideanNorm();
        joints[i0].updatePos(sx, sy);
        float new_length = getEuclideanNorm();
        float viscosity = 0.5; // Nominal viscosity for water
        float correctionFactor = (current_length - new_length) * viscosity;

        int i1 = (i0 + 1) % 2;    // select the second Joint
        vector<float> motion = getMotionVector(i0);
        joints[i1].x -= motion[0] * correctionFactor;
        joints[i1].y -= motion[1] * correctionFactor;
    }else{
        throw invalid_argument("Chose an i0 between [0,1]");
    }
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
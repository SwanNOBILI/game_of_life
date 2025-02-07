#include "../include/link.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Link::Link(Joint j1, Joint j2) : joint1(j1), joint2(j2) {}
Link::~Link() {}

float Link::getEuclideanNorm() const {
    float dx = joint2.x - joint1.x;
    float dy = joint2.y - joint1.y;
    return sqrt(dx * dx + dy * dy);
}

vector<float> Link::getMotionVector() const {
    // Exemple de calcul d'un vecteur de mouvement basé sur les joints
    vector<float> motionVector;
    motionVector.push_back(joint2.x - joint1.x);
    motionVector.push_back(joint2.y - joint1.y);
    return motionVector;
}

void Link::moveVoid(float dt) {
    // Mise à jour des positions des joints
    joint1.updatePosition(dt);
    joint2.updatePosition(dt);
}

void Link::moveLiquid(int i0, float dt) {
    if (i0 == 0 || i0 == 1) {
        float original_distance = getEuclideanNorm();

        // Déplacement du joint i0
        joint1.updatePosition(dt);

        // Recalcul de la distance après mouvement
        float new_distance = float(sqrt(pow(joint2.x - joint1.x, 2) + pow(joint2.y - joint1.y, 2)));

        if (new_distance != 0) {
            float correctionFactor = (original_distance - new_distance) / (2 * new_distance); // Correction répartie sur les deux joints

            // Correction des positions pour conserver la distance initiale
            joint2.x += (joint1.x - joint2.x) * correctionFactor;
            joint2.y += (joint1.y - joint2.y) * correctionFactor;
        }
    } else {
        throw invalid_argument("Choose an i0 between [0,1]");
    }
}

void Link::display() const {
    cout << "Joint 1 -> "; joint1.display();
    cout << "Joint 2 -> "; joint2.display();
}
#ifndef LINK_HPP
#define LINK_HPP

#include "../include/joint.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;
using namespace sf;

class Link {
    public:
        Joint joint1;
        Joint joint2;

        Link(Joint j1, Joint j2);
        ~Link();

        float getEuclideanNorm() const;
        vector<float> getMotionVector() const;
        void moveVoid(float dt);
        void moveLiquid(int i0, float dt);

        void display() const;
};

#endif // LINK_HPP
#ifndef LINK_HPP
#define LINK_HPP

#include "../include/joint.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;
using namespace sf;

class Link {
    public:
        vector<Joint> joints;

        Link(vector<Joint> j0);
        ~Link();

        float getEuclideanNorm() const;
        vector<float> getMotionVector(int i) const;
        void moveVoid(float sx, float sy);
        void moveLiquid(int i0, float sx, float sy);

        void display() const;
};

#endif // LINK_HPP
#ifndef LINK_HPP
#define LINK_HPP

#include "../include/joint.hpp"
#include <vector>

using namespace std;

class Link {
    public:
        vector<Joint> joints;

        Link(vector<Joint> j0);
        ~Link();

        void display() const;
};

#endif // LINK_HPP
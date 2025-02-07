#ifndef CREA_HPP
#define CREA_HPP

#include "../include/link.hpp"
#include <string>

using namespace std;

class Crea {
public:
    vector<Link> links;

    Crea(vector<Link> links_);

    void addLink(Link l0);
};

#endif // CREA_HPP
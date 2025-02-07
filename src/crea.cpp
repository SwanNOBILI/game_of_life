#include "../include/crea.hpp"
#include <cmath>

using namespace sf;

Crea::Crea(vector<Link> links_) : links(links_) {}

void Crea::addLink(Link l0) {
    links.push_back(l0);
}


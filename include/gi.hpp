#ifndef GI_HPP
#define GI_HPP

#include "../include/link.hpp"
#include "../include/crea.hpp"
#include <string>

using namespace std;

class GI {
public:
    RenderWindow window;
    vector<Crea> creatures;

    GI(string name);

    void addCreature(Crea c0);

    void draw();
    void run();
};

#endif // GI_HPP
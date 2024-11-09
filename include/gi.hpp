#ifndef GI_HPP
#define GI_HPP

#include "../include/link.hpp"
#include <string>

using namespace std;

class WindowApp {
public:
    RenderWindow window;
    vector<Link> links;

    WindowApp(string name);

    void addLink(Link l0);

    void draw();
    void run();
};

#endif // GI_HPP
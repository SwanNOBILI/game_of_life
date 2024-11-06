#include <SFML/Graphics.hpp>
#include "../include/test.hpp"

using namespace sf;

int main() {
    // RenderWindow window(VideoMode(800, 600), "Test SFML");

    // while (window.isOpen()) {
    //     Event event;
    //     while (window.pollEvent(event)) {
    //         if (event.type == Event::Closed)
    //             window.close();
    //     }

    //     window.clear();
    //     window.display();
    // }
    testJointConstructor();
    testJointDistance();
    testJointAddSpeed();
    testJointDisplay();

    testLinkConstructor();
    testLinkDisplay();

    return 0;
}
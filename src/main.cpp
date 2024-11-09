#include "../include/main.hpp"

int main() {
    test(Joint);
    /*
    RenderWindow window(VideoMode(800, 600), "SFML");
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }*/

    return 0;
}

void test(Choice testClass){
    switch(testClass){
        case Joint:
            testJointConstructor();
            testJointAddSpeed();
            testJointDisplay();
            break;
        case Link:
            testLinkConstructor();
            testLinkDistance();
            testLinkDisplay();
            break;
    }
}
#include "../include/gi.hpp"
#include <SFML/Graphics.hpp>
#include <cmath>

using namespace sf;

WindowApp::WindowApp(short int width, short int height, string name) : window(VideoMode(width, height), name) {}

void WindowApp::addLink(Link l0) {
    links.push_back(l0);
}



void WindowApp::draw() {
    window.clear(Color::White);
    float r = 10;   // Radius of the Joints
    float h = 8;    // Height of the Links

    for (auto& link : links) {
        Vector2f p0(link.joints[0].x, link.joints[0].y);
        Vector2f p1(link.joints[1].x, link.joints[1].y);

        // Create a circle for the joints
        CircleShape c0(r), c1(r);
        c0.setFillColor(Color::Red); c1.setFillColor(Color::Red);
        c0.setPosition(p0.x-r, p0.y-r);
        c1.setPosition(p1.x-r, p1.y-r);

        // Create a rectangle to draw the link between the joints
        RectangleShape line;
        float length = link.getEuclideanNorm();
        line.setSize(Vector2f(length, h));
        line.setFillColor(Color::Black);
        line.setPosition(p0.x, p0.y-h/2);

        // Adjust the orientation of the rectangle to follow the direction of the joints
        float angle = atan2(p1.y - p0.y, p1.x - p0.x) * 180.0f / float(M_PI);
        line.setRotation(angle);

        window.draw(line); window.draw(c0); window.draw(c1);
    }

    window.display();
}

void WindowApp::run() {

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }else{
                links[0].moveVoid(0, 5);
            }
        }
        draw();
    }
}
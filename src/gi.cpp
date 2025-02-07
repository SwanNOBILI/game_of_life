#include "../include/gi.hpp"
#include <SFML/Graphics.hpp>
#include <cmath>

using namespace sf;

GI::GI(string name) : window(VideoMode::getDesktopMode(), name) {}

void GI::addCreature(Crea c0){
    creatures.push_back(c0);
}

void GI::draw() {
    /*
    window.clear(Color::White);
    float r = 10;   // Radius of the Joints
    float h = 4;    // Height of the Links
    bool first = true;
    
    for (auto& link : links) {
        Vector2f p0(link.joint1.x, link.joint1.y);
        Vector2f p1(link.joint2.x, link.joint2.y);

        // Create a circle for the joints
        CircleShape c1(r);
        c1.setFillColor(Color::Red);
        c1.setPosition(p1.x-r, p1.y-r);

        // Create a rectangle to draw the link between the joints
        RectangleShape line;
        float length = link.getEuclideanNorm();
        line.setSize(Vector2f(length, h));
        line.setFillColor(Color::Black);
        line.setOrigin(0, h / 2);
        line.setPosition(p0.x, p0.y);


        // Adjust the orientation of the rectangle to follow the direction of the joints
        float angle = atan2(p1.y - p0.y, p1.x - p0.x) * 180.0f / float(M_PI);
        line.setRotation(angle);

        window.draw(line);

        // Pour le 1er lien, on affiche les 2 joints
        if (first) {
            CircleShape c0(r);
            c0.setFillColor(Color::Red); 
            c0.setPosition(p0.x-r, p0.y-r);
            window.draw(c0);
            first = false;
        } 
        // Pour les autres on affiche uniquement le 2nd joint
        window.draw(c1);
    }

    window.display();
    */
}

void GI::run() {

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        //links[0].moveVoid(0);
        //links[1].moveVoid(0.1f);

        draw();
    }
}
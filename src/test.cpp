#include "../include/test.hpp"
#include "../include/joint.hpp"
#include "../include/link.hpp"
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

//--------------------------------------------------------JOINT-------------------------------------------------------//
void testJointConstructor() {
    // Test the Constructor with coordinates only
    Joint joint1(0, 0);
    assert(joint1.x == 0);
    assert(joint1.y == 0);
    cout << "Test Constructor without Speed: OK" << endl;

    // Test the Constructor with coordinates and speeds
    Joint joint2(1, 1, 0.5, 0.5);
    assert(joint2.x == 1);
    assert(joint2.y == 1);
    assert(joint2.sx == 0.5);
    assert(joint2.sy == 0.5);
    cout << "Test Constructor with Speed:    OK" << endl;
}

void testJointAddSpeed() {
    Joint joint(1, 1, 0.5, 0.5);
    joint.addSpeed();  // x increases with sx, y increases with sy: 1 + 0.5 = 1.5 each
    assert(joint.x == 1.5);
    assert(joint.y == 1.5);
    cout << "Test Joint.addSpeed:            OK" << endl;
}

void testJointDisplay() {
    Joint joint(1, 1, 0.5, 0.5);
    joint.addSpeed();  // Apply addSpeed to modify coordinates
    cout << "Test Joint.display:             ";
    joint.display();
    cout << endl;
}
//--------------------------------------------------------------------------------------------------------------------//

//--------------------------------------------------------LINK--------------------------------------------------------//
void testLinkConstructor() {
    Joint joint1(0, 0);
    Joint joint2(1, 1);
    Link link({joint1, joint2});

    assert(link.joints.size() == 2);                            // Check that the vector contains 2 joints
    assert(link.joints[0].x == 0 && link.joints[0].y == 0);     // Check coordinates of the first joint
    assert(link.joints[1].x == 1 && link.joints[1].y == 1);     // Check coordinates of the second joint

    cout << "Test Link Constructor: OK" << endl;
}

void testLinkDistance() {
    Joint joint1(0, 0);
    Joint joint2(1, 1);
    Link link({joint1, joint2});

    double link_size = link.getSize();
    assert(link_size == sqrt(2)); 
    cout << "Test Link.getSize:     OK" << endl;
}

void testLinkDisplay() {
    Joint joint1(0, 0);
    Joint joint2(1, 1);
    Link link({joint1, joint2});

    cout << "Test Link.display:     ";
    link.display();
}
//--------------------------------------------------------------------------------------------------------------------//
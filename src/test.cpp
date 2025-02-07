#include "../include/test.hpp"
#include "../include/joint.hpp"
#include "../include/link.hpp"
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

//--------------------------------------------------------JOINT-------------------------------------------------------//
void testJointConstructor() {
    // Test the Constructor with Coordinates only
    Joint joint1(1, 1);
    assert(joint1.x == 1);
    assert(joint1.y == 1);
    assert(joint1.sx == 0);
    assert(joint1.sy == 0);
    cout << "Test Constructor without Speed: OK" << endl;
    // Test the Constructor with Coordinates & Speed
    Joint joint2(0, 0, 0.5, 0.5);
    assert(joint2.x == 0);
    assert(joint2.y == 0);
    assert(joint2.x == 0.5);
    assert(joint2.y == 0.5);
    cout << "Test Constructor with Speed:    OK" << endl;
}

void testJointUpdatePos() {
    Joint joint(1, 1, 0.5, 0.5);
    joint.updatePosition(1.0f);  // Apply updatePosition to modify coordinates
    assert(joint.x == 1.5);
    assert(joint.y == 1.5);
    cout << "Test Joint.updatePos:           OK" << endl;
}

void testJointDisplay() {
    Joint joint(1, 1, 0.5, 0.5);
    joint.updatePosition(0.1f);  // Apply updatePosition to modify coordinates
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

    assert(link.joint1.x == 0 && link.joint1.y == 0);     // Check coordinates of the first joint
    assert(link.joint2.x == 1 && link.joint2.y == 1);     // Check coordinates of the second joint

    cout << "Test Link Constructor:      OK" << endl;
}

void testLinkDistance() {
    Joint joint1(0, 0);
    Joint joint2(1, 1);
    Link link({joint1, joint2});

    double link_size = link.getEuclideanNorm();
    assert(link_size == sqrt(2)); 
    cout << "Test Link.getEuclideanNorm: OK" << endl;
}

void testLinkDisplay() {
    Joint joint1(0, 0);
    Joint joint2(1, 1);
    Link link({joint1, joint2});

    cout << "Test Link.display:          ";
    link.display();
}
//--------------------------------------------------------------------------------------------------------------------//
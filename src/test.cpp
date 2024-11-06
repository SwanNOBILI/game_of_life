// test_joint.cpp
#include "../include/test.hpp"
#include "../include/joint.hpp"
#include "../include/link.hpp"
#include <iostream>
#include <cassert>
#include <cmath>  // Inclure cmath pour sqrt

using namespace std;

void testJointConstructor() {
    // Test du constructeur avec coordonnées seulement
    Joint joint1(0, 0);
    assert(joint1.x == 0);
    assert(joint1.y == 0);
    cout << "Test constructeur sans vitesse: OK" << endl;

    // Test du constructeur avec coordonnées et vitesses
    Joint joint2(1, 1, 0.5, 0.5);
    assert(joint2.x == 1);
    assert(joint2.y == 1);
    assert(joint2.sx == 0.5);
    assert(joint2.sy == 0.5);
    cout << "Test constructeur avec vitesse: OK" << endl;
}

void testJointDistance() {
    // Test de la méthode distance
    Joint joint1(0, 0, 0.5, 0.5);
    Joint joint2(1, 1, 0.5, 0.5);
    double dist = joint1.distance(joint2);
    //cout << "Distance entre joint1 et joint2: " << dist << endl;
    assert(dist == sqrt(2)); 
    cout << "Test de la distance: OK" << endl;
}

void testJointAddSpeed() {
    // Test de la méthode addSpeed
    Joint joint(1, 1, 0.5, 0.5);
    joint.addSpeed();  // Après addSpeed, x et y devraient augmenter de 0.5
    assert(joint.x == 1.5);  // x devrait être 1 + 0.5 = 1.5
    assert(joint.y == 1.5);  // y devrait être 1 + 0.5 = 1.5
    cout << "Test de addSpeed: OK" << endl;
}

void testDisplay() {
    // Test de la méthode display
    Joint joint(1, 1, 0.5, 0.5);
    joint.addSpeed();  // On applique addSpeed pour modifier les coordonnées
    cout << "Affichage des coordonnées de joint après addSpeed: ";
    joint.display(); // Devrait afficher (1.5, 1.5)
    cout << "Tous les tests ont réussi!" << endl;
}

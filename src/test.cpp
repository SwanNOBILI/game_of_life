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

void testJointDisplay() {
    // Test de la méthode display
    Joint joint(1, 1, 0.5, 0.5);
    joint.addSpeed();  // On applique addSpeed pour modifier les coordonnées
    // cout << "Affichage des coordonnées de joint après addSpeed: ";
    cout << "Test affichage de Joint: "<< endl;
    joint.display(); // Devrait afficher (1.5, 1.5)
    cout << endl;
}

void testLinkConstructor(){
    //Test du constructeur de Link
    Joint joint1(0, 0);
    Joint joint2(1, 1);

    // Création d'une instance de Link avec le vecteur de joints
    Link link({ joint1, joint2 });

    // Test de l'attribut 'joints' de Link (on vérifie sa taille et les coordonnées des joints)
    assert(link.joints.size() == 2);  // Vérifie que le vecteur contient 3 joints
    assert(link.joints[0].x == 0 && link.joints[0].y == 0);  // Vérifie les coordonnées du premier joint
    assert(link.joints[1].x == 1 && link.joints[1].y == 1);  // Vérifie les coordonnées du deuxième joint

    cout << "Test constructeur de Link: OK" << endl;

}

void testLinkDisplay(){
    Joint joint1(0, 0);
    Joint joint2(1, 1);
    Link link({ joint1, joint2 });

    // Test de l'affichage de link
    cout << "Test affichage de Link: " << endl;
    link.display();
}

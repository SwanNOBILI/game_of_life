#ifndef JOINT_HPP
#define JOINT_HPP

#include <iostream>
#include <cmath>

class Joint {
public:
    double x, y;    // Coordonnées
    double sx, sy;  // Vitesses 

    // Constructeur par défaut avec coordonnées
    Joint(double x, double y);

    // Constructeur avec coordonnées et vitesses
    Joint(double x, double y, double sx, double sy);

    // Méthode pour calculer la distance par rapport à un autre point
    double distance(const Joint& other) const;

    // Méthode pour ajouter de la vitesse
    void addSpeed();

    // Méthode pour afficher les coordonnées du point
    void display() const;
};

#endif // JOINT_HPP

#include "../include/link.hpp"

using namespace std;

Link::Link(vector<Joint> j0) : joints(j0) {}

void Link::display() const{
    cout << "Link : ";

    // On vérifie si la taille du vecteur n'est pas vide
    if (!joints.empty()) {
        // Affichage du premier joint sans virgule
        cout << "Joint0:"; 
        joints[0].display();
        
        // Affichage des autres joints avec une virgule avant
        for (int i = 1; i < joints.size(); i++) {
            cout << ", ";
            cout << "Joint" << i << ":"; 
            joints[i].display();
        }
    }
    cout << endl;
}
#include "../include/link.hpp"

using namespace std;

Link::Link(vector<Joint> j0) : joints(j0) {}

void Link::display() const{
    cout << "Link" << endl;
    for(int i = 0; i < joints.size(); i++){
        cout << "Joint " << i;
        joints[i].display();
        cout << endl;
    }
    cout << endl;
}
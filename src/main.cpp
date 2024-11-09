#include "../include/main.hpp"

int main() {
    //test(Joint);
    short int w = 1800, h = 950;
    GI app("Mart1");

    Joint j1(w/4, h/4), j2(w/2, h/4);
    Link l0({j1,j2});
    app.addLink(l0);
    app.run();

    return 0;
}

void test(Choice testClass){
    switch(testClass){
        case joint:
            testJointConstructor();
            testJointUpdatePos();
            testJointDisplay();
            break;
        case link:
            testLinkConstructor();
            testLinkDistance();
            testLinkDisplay();
            break;
    }
}
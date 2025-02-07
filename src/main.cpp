#include "../include/main.hpp"

int main() {
    //test(Joint);
    short int w = 1800, h = 950;
    GI app("THEO");

    Joint j1(w/4, h/4, 0.5f, 0.5f), j2(w/2, h/4, 0.5f, 0.5f), j3(w/4, h/2, 0.5f, 0.5f);
    Link l0({j1,j2}), l1({j2,j3});
    Crea c0({l0,l1});
    app.addCreature(c0);

    //app.run();

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
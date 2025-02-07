#ifndef JOINT_HPP
#define JOINT_HPP

class Joint {
public:
    float x, y;     // Position
    float sx, sy;   // Speed

    Joint(float x, float y);
    Joint(float x0, float y0, float sx0, float sy0);
    ~Joint();

    void updateSpeed(float sx0, float sy0);
    void updatePosition(float dt);

    void display() const;
};

#endif // JOINT_HPP

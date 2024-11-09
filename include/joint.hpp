#ifndef JOINT_HPP
#define JOINT_HPP

class Joint {
public:
    float x, y;

    Joint(float x, float y);
    ~Joint();

    void updatePos(float sx, float sy);

    void display() const;
};

#endif // JOINT_HPP

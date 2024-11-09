#ifndef JOINT_HPP
#define JOINT_HPP

class Joint {
public:
    double x, y;
    double sx, sy;

    Joint(double x, double y);
    Joint(double x, double y, double sx, double sy);
    ~Joint();

    void addSpeed();

    void display() const;
};

#endif // JOINT_HPP

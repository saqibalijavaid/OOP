#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    double pi;

public:
    Circle()
    {
        radius = 0.0;
    }
    Circle(double inputRadius)
    {
        radius = inputRadius;
    }

    void setRadius(double x)
    {
        radius = x;
    }
    double getRadius() const
    {
        return radius;
    }

    double getArea(double pi, double radius)
    {
        double area = pi * radius * radius;
        return area;
    }
    double getDiameter(double radius)
    {
        double diameter = 2 * radius;
        return diameter;
    }
    double getCircumference(double pi, double radius)
    {
        double circumference = 2 * pi * radius;
        return circumference;
    }
};

int main(void)
{
    Circle first;

    double radius;
    cout << "----------------------" << endl;
    cout << "Enter radius: ";
    cin >> radius;
    double pi = 3.14159;

    cout << "----------------------" << endl;
    cout << "Circle area = " << first.getArea(pi, radius) << endl;
    cout << "Circle diameter = " << first.getDiameter(radius) << endl;
    cout << "Circle circumference = " << first.getCircumference(pi, radius) << endl;
    cout << "-------------------------------" << endl;

    return 0;
}

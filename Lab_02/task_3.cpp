#include <iostream>

using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    int speed;

public:
    Car(int yearModelInput, string makeInput)
    {
        yearModel = yearModelInput;
        make = makeInput;
        speed = 0;
    }

    // setter
    void yearModelSet(int x)
    {
        yearModel = x;
    }
    void makeSet(string x)
    {
        make = x;
    }
    void speedSet(int x)
    {
        speed = x;
    }

    // getter
    int yearModelGet() const
    {
        return yearModel;
    }
    string makeGet() const
    {
        return make;
    }
    int speedGet() const
    {
        return speed;
    }

    void accelerate()
    {
        speed = speed + 5;
    }
    void brake()
    {
        speed = speed - 5;
    }
};

int main(void)
{
    int yearModel;
    string make;
    Car *car1 = new Car(yearModel, make);

    for (int i = 0; i < 5; i++)
    {
        car1->accelerate();
        cout << "Current Speed: " << (*car1).speedGet() << endl;
        
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        car1->brake();
        cout << "Current Speed: " << (*car1).speedGet() << endl;
    }

    return 0;
}
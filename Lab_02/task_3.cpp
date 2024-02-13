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
    Car *car1 = new Car(yearModel, make); // car1 is an object which is dynamically allocated

    cout << "Initial Speed: " << (*car1).speedGet() << endl;
    cout << "-----------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        car1->accelerate();
        cout << i + 1 << ") "
             << "Current Speed (Acceleration): " << (*car1).speedGet() << endl;
    }

    cout << endl;

    cout << "Initial Speed: " << (*car1).speedGet() << endl;
    cout << "-----------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        car1->brake();
        cout << i + 1 << ") "
             << "Current Speed (Brake): " << (*car1).speedGet() << endl;
    }

    delete car1;
    // car1 is a pointer to a single object, not an array so we will use 'delete' instead of 'delete[]'. This will properly deallocate the memory allocated for the single Car object pointed to by car1.

    return 0;
}

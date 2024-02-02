// Task 1: Create a `Student` class with the following attributes and member functions.
// Attributes:
//     • Roll Number
//     • Name
//     • Address
//     • Phone Number
//     • Grade
// All data members will be hidden from user.
// Methods:
//     • Setters for each attribute
//     • Getters for each attribute
//     • Function to display details for a student
// Demonstrate the usage of this class by creating an instance of the class, setting values using setters, and displaying the student details using the provided member function in the main function.

#include <iostream>
using namespace std;

class Student
{
    string rollNumber;
    string name;
    string address;
    int phoneNumber;
    string grade;

public:
    // setter
    void setRollNumber(string inputRoll)
    {
        rollNumber = inputRoll;
    }
    void setname(string inputName)
    {
        name = inputName;
    }
    void setaddress(string inputAddress)
    {
        address = inputAddress;
    }
    void setphoneNumber(int inputPhone)
    {
        phoneNumber = inputPhone;
    }
    void setgrade(string inputGrade)
    {
        grade = inputGrade;
    }
    // getter
    string getRollNumber()
    {
        return rollNumber;
    }
    string getname()
    {
        return name;
    }
    string getaddress()
    {
        return address;
    }
    int getphoneNumber()
    {
        return phoneNumber;
    }
    string getgrade()
    {
        return grade;
    }
    void printStudent()
    {
        cout << "\nStudent details:" << endl;
        cout << "Roll No: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone No: " << phoneNumber << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main(void)
{

    Student saqib;

    string rollNumber;
    string name;
    string address;
    int phoneNumber;
    string grade;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Address: ";
    cin >> address;
    cout << "Enter Phone Number: ";
    cin >> phoneNumber;
    cout << "Enter Grade: ";
    cin >> grade;

    saqib.setRollNumber(rollNumber);
    saqib.setname(name);
    saqib.setaddress(address);
    saqib.setphoneNumber(phoneNumber);
    saqib.setgrade(grade);

    // cout<<saqib.getRollNumber()<<endl;
    // cout<<saqib.getname()<<endl;
    // cout<<saqib.getaddress()<<endl;
    // cout<<saqib.getphoneNumber()<<endl;
    // cout<<saqib.getgrade()<<endl;

    saqib.printStudent();

    return 0;
}
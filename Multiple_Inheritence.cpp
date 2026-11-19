#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;

    void getVehicle()
    {
        cout << "Enter Vehicle Brand: ";
        cin >> brand;
    }
};

class Car : public Vehicle
{
public:
    string model;

    void getCar()
    {
        cout << "Enter Car Model: ";
        cin >> model;
    }
};

class ElectricCar : public Car
{
public:
    int battery;

    void getElectricCar()
    {
        cout << "Enter Battery Capacity: ";
        cin >> battery;
    }

    void display()
    {
        cout << "\nElectric Car Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Battery Capacity: " << battery << " kWh" << endl;
    }
};

int main()
{
    ElectricCar e;

    e.getVehicle();
    e.getCar();
    e.getElectricCar();
    e.display();

    return 0;
}
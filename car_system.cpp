#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;
    int speed;

public:
    // Constructor to initialize brand, model, and year
    Car(string b, string m, int y) : brand(b), model(m), year(y), speed(0) {}

    // Getters
    string getBrand() const
    {
        return brand;
    }

    string getModel() const
    {
        return model;
    }

    int getYear() const
    {
        return year;
    }

    int getSpeed() const
    {
        return speed;
    }

    // Setter for speed only
    void setSpeed(int s)
    {
        speed = s;
    }

    // Method to increase speed
    void increaseSpeed(int amount)
    {
        speed += amount;
    }

    // Method to decrease speed
    void decreaseSpeed(int amount)
    {
        speed = (speed - amount < 0) ? 0 : speed - amount;
    }

    // Method to print car details
    void printDetails() const
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    // Create an object of the Car class
    Car myCar("Toyota", "Corolla", 2020);

    // Modify speed using the provided methods
    myCar.increaseSpeed(50);
    myCar.printDetails(); // Prints details after increasing speed

    myCar.decreaseSpeed(30);
    myCar.printDetails(); // Prints details after decreasing speed

    myCar.decreaseSpeed(30);
    myCar.printDetails(); // Prints details after attempting to decrease below 0

    return 0;
}

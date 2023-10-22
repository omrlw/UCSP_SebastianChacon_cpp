#include "MotorVehicle.h"
#include <iostream>

MotorVehicle::MotorVehicle(std::string make, std::string fuelType, int yearOfManufacture, std::string color, int engineCapacity)
        : make(make), fuelType(fuelType), yearOfManufacture(yearOfManufacture), color(color), engineCapacity(engineCapacity) {
}

void MotorVehicle::setMake(std::string make) {
    this->make = make;
}

std::string MotorVehicle::getMake() const {
    return make;
}

void MotorVehicle::setFuelType(std::string fuelType) {
    this->fuelType = fuelType;
}

std::string MotorVehicle::getFuelType() const {
    return fuelType;
}

void MotorVehicle::setYearOfManufacture(int yearOfManufacture) {
    this->yearOfManufacture = yearOfManufacture;
}

int MotorVehicle::getYearOfManufacture() const {
    return yearOfManufacture;
}

void MotorVehicle::setColor(std::string color) {
    this->color = color;
}

std::string MotorVehicle::getColor() const {
    return color;
}

void MotorVehicle::setEngineCapacity(int engineCapacity) {
    this->engineCapacity = engineCapacity;
}

int MotorVehicle::getEngineCapacity() const {
    return engineCapacity;
}

void MotorVehicle::displayCarDetails() const {
    std::cout << "Make: " << make << std::endl;
    std::cout << "Fuel Type: " << fuelType << std::endl;
    std::cout << "Year of Manufacture: " << yearOfManufacture << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Engine Capacity: " << engineCapacity << " cc" << std::endl;
}

int main() {

    MotorVehicle car("Toyota", "Gasoline", 2022, "Blue", 1500);


    car.displayCarDetails();

    return 0;
}


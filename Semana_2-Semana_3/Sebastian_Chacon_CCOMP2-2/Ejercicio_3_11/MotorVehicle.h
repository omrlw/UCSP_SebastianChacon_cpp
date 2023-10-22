//
// Created by omr_t on 13/09/2023.
//

#ifndef EJERCICIO_3_11_EJERCICIO3_11_H
#define EJERCICIO_3_11_EJERCICIO3_11_H

#include <string>

class MotorVehicle {
public:
    MotorVehicle(std::string make, std::string fuelType, int yearOfManufacture, std::string color, int engineCapacity);

    void setMake(std::string make);
    std::string getMake() const;

    void setFuelType(std::string fuelType);
    std::string getFuelType() const;

    void setYearOfManufacture(int yearOfManufacture);
    int getYearOfManufacture() const;

    void setColor(std::string color);
    std::string getColor() const;

    void setEngineCapacity(int engineCapacity);
    int getEngineCapacity() const;

    void displayCarDetails() const;

private:
    std::string make;
    std::string fuelType;
    int yearOfManufacture;
    std::string color;
    int engineCapacity;
};

#endif // MOTORVEHICLE_H

//
// Created by omr_t on 13/09/2023.
//

#include "Date.h"
#include <iostream>

Date::Date(int month, int day, int year) {
    // Validity check for the month (1-12)
    if (month >= 1 && month <= 12) {
        this->month = month;
    } else {
        this->month = 1; // Set to default value if invalid
    }

    // Assume day and year values are correct
    this->day = day;
    this->year = year;
}

void Date::setMonth(int month) {
    // Validity check for the month (1-12)
    if (month >= 1 && month <= 12) {
        this->month = month;
    }
}

int Date::getMonth() const {
    return month;
}

void Date::setDay(int day) {
    // Assume day values are correct
    this->day = day;
}

int Date::getDay() const {
    return day;
}

void Date::setYear(int year) {
    // Assume year values are correct
    this->year = year;
}

int Date::getYear() const {
    return year;
}

void Date::displayDate() const {
    std::cout << month << "/" << day << "/" << year << std::endl;
}

int main() {
    // Crear una instancia de la clase Date
    Date date(9, 13, 2023);

    // Mostrar la fecha
    date.displayDate();

    // Intentar establecer un mes no válido
    date.setMonth(13);
    date.displayDate(); // Debería mostrar "1/13/2023" debido a la corrección

    return 0;
}
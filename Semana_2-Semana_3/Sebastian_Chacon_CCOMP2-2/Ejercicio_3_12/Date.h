//
// Created by omr_t on 13/09/2023.
//

#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(int month, int day, int year);

    void setMonth(int month);
    int getMonth() const;

    void setDay(int day);
    int getDay() const;

    void setYear(int year);
    int getYear() const;

    void displayDate() const;

private:
    int month;
    int day;
    int year;
};

#endif // DATE_H

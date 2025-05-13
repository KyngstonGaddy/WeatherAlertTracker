// Header file for WeatherAlerts.cpp
// Created by Kyngston Gaddy
// Date: 5/13/2025

// import statements
#ifndef WEATHERALERTS_H
#define WEATHERALERTS_H
#include <string>


class WeatherAlerts {
public:
    std::string type; // type of condition
    std::string description; // description of weather condition
    int prioScore; // priority score

    WeatherAlerts(std::string type, std::string description, int prioScore); // constructor
    bool operator>(const WeatherAlerts& other) const; // compares two alerts based on priority score
};

#endif //WEATHERALERTS_H

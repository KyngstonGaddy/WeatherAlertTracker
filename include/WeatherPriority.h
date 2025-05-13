// Header file for WeatherPriority.cpp
// Created by Kyngston Gaddy
// Date: 5/13/2025

// import statements
#ifndef WEATHERPRIORITY_H
#define WEATHERPRIORITY_H
#include <WeatherAlerts.h>
#include <nlohmann/json_fwd.hpp>

class WeatherPriority {
public:
    static WeatherAlerts assignFromJSON(const nlohmann::json& json); // sets priority per condition
};

#endif //WEATHERPRIORITY_H

// Saves priority of each condition
// Created by Kyngston Gaddy
// Date: 5/13/2025

//import statements
#include "WeatherPriority.h"
#include <nlohmann/json.hpp>
#include "WeatherAlerts.h"

/**
 * sets priority per condition
 * @param json parsed object that holds weather data
 * @return priority score
 */
WeatherAlerts WeatherPriority::assignFromJSON(const nlohmann::json &json) {
    std::string condition = json["weather"][0]["main"];
    std::string description = json["weather"][0]["description"];

    int priority = 1;
    if (condition == "Thunderstorm") {
        priority = 4;
    } else if (condition == "Drizzle") {
        priority = 3;
    } else if (condition == "Rain") {
        priority = 3;
    } else if (condition == "Snow") {
        priority = 4;
    } else if (condition == "Atmosphere") {
        priority = 2;
    } else if (condition == "Clear") {
        priority = 1;
    } else if (condition == "Clouds") {
        priority = 2;
    }

    return WeatherAlerts(condition, description, priority);
}


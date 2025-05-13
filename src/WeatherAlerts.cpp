// Stores each weather alert
// Created by Kyngston Gaddy
// Date: 5/12/2025

// import statements
#include "../include/WeatherAlerts.h"

/**
 * constructor to initialize the weather alerts object
 * O(1)
 * @param type type of condition
 * @param description description of weather condition
 * @param prioScore where it scores in priority
 */
WeatherAlerts::WeatherAlerts(std::string type, std::string description, int prioScore) {
    this->type = type;
    this->description = description;
    this->prioScore = prioScore;
}

/**
 * compares objects based on priority score
 * O(1)
 * @param other different weather alerts object
 * @return if one priority score is greater than other
 */
bool WeatherAlerts::operator>(const WeatherAlerts& other) const {
    return prioScore > other.prioScore;
}
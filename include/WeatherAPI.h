// Header file for WeatherAPI.cpp
// Created by Kyngston Gaddy
// Date: 5/13/2025

// import statements
#ifndef WEATHERAPI_H
#define WEATHERAPI_H
#include <nlohmann/json_fwd.hpp>

class WeatherAPI {
public:
	WeatherAPI(); // constructor
	nlohmann::json getWeatherCity(const std::string& city); // requests data from specified cities
	std::string urlEncoder(const std::string& input); // encodes strings
private:
	std::string apiKey; // api key
	std::string makeRequest(const std::string& url); // requests data from API
};

#endif //WEATHERAPI_H

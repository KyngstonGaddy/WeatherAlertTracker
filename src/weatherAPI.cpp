// Handles the importation of the API
// Created by Kyngston Gaddy
// Date: 5/13/2025

// import statements
#include <iostream>
#include <nlohmann/json.hpp>
#include <nlohmann/json_fwd.hpp>
#include <curl/curl.h>
#include "WeatherAPI.h"
#include "ConfigManager.h"

using json = nlohmann::json;

/**
 * Constructor for WeatherAPI class
 */
WeatherAPI::WeatherAPI() {
	apiKey = ConfigManager::getAPIkey();
}

/**
 * writes all incoming data into a string
 * O(n)
 * @param contents points to data from API
 * @param size size of chunks of data
 * @param nmemb # of chunks of data
 * @param output points to string where data is added
 * @return total size of the data that's been written
 */
size_t Callback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t newSize = size * nmemb;
    output->append((char*)contents, newSize);
    return newSize;
}

/**
 * requests info from API, returns it
 * O(n)
 * @param url API endpoint
 * @return response from API as string
 */
std::string WeatherAPI::makeRequest(const std::string& url) {
	CURL *curl = curl_easy_init();
	std::string response;
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Callback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

		CURLcode res = curl_easy_perform(curl);
		if (res != CURLE_OK) {
			std::cerr << "CURL failed: " << curl_easy_strerror(res) << std::endl;
		}
		curl_easy_cleanup(curl);
	}
	return response;
}

/**
 * requests data from specified city
 * O(n)
 * @param city name of city
 * @return the parsed JSON object with weather data
 */
json WeatherAPI::getWeatherCity(const std::string &city) {
	std::string encodedCity = urlEncoder(city);
	std::string url = "https://api.openweathermap.org/data/2.5/weather?q=" + encodedCity + "&appid=" + apiKey + "&units=metric";
	std::string data = makeRequest(url);

	json parsed = json::parse(data);
	if (!parsed.contains("weather") || !parsed["weather"].is_array() || parsed["weather"].empty()) {
		throw std::runtime_error("Invalid response from API or city not found.");
	}
	return parsed;
}

/**
 * encodes strings by adding the '%20' for urls
 * O(n)
 * @param input city name
 * @return encoded city name
 */
std::string WeatherAPI::urlEncoder(const std::string &input) {
	std::string encoded;
	for (char c : input) {
		if (c == ' ') {
			encoded += "%20";
		} else {
			encoded += c;
		}
	}
	return encoded;
}
// Main Method for API Project
// Created by Kyngston Gaddy
// Date: 5/13/2025


// import statements
#include <iostream>
#include "WeatherAPI.h"
#include <nlohmann/json.hpp>
#include "Benchmarks.h"
#include "WeatherHeap.h"
#include "WeatherPriority.h"

/**
 * main entry point for the program: prompts user for city and if they would like to run benchmarks
 * @return
 */
int main() {
    WeatherAPI api;
    WeatherHeap heap;

    while (true) {
        std::string city;
        std::cout << "Enter a city or \'exit\' to end program: ";
        std::getline(std::cin, city);

        if (city == "exit") {
            break;
        }

        if (city.empty()) {
            std::cout << "Please enter a valid city.\n\n";
            continue;
        }

        try {
            auto jsonData = api.getWeatherCity(city);
            WeatherAlerts alert = WeatherPriority::assignFromJSON(jsonData);
            heap.insert(alert);

            std::cout << "\nTop Weather Alert for " << city << ":\n";
            WeatherAlerts top = heap.extractMax();
            std::cout << top.type << " (" << top.prioScore << "): " << top.description << "\n\n";

            std::string option;
            std::cout << "Run benchmarks? (y/n): ";
            std::getline(std::cin, option);
            if (option == "y") {
                Benchmarks benchmarks;
                for (int size : {1000, 5000, 10000, 100000}) {
                    std::cout << "\n";
                    std::cout << "Running benchmarks for " << size << " alerts...\n";
                    benchmarks.runBenchmarks(size);
                }
            }
        }
        catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << "\n\n";
        }
    }

    std::cout << "* End of Program *" << std::endl;
    return 0;
}

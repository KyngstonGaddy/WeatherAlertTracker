// Header file for Benchmarks.cpp
// Created by Kyngston Gaddy
// Date: 5/13/2025

// import statements
#ifndef BENCHMARKS_H
#define BENCHMARKS_H
#include <vector>
#include "WeatherAlerts.h"

class Benchmarks {
public:
    std::vector<WeatherAlerts> generateAlerts(int count); // generates random alerts
    double benchmarksWeatherHeap(const std::vector<WeatherAlerts>& alerts); // benchmarks for max heap
    double benchmarksWeatherPrioQueue(const std::vector<WeatherAlerts>& alerts); // benchmarks for a priority queue
    void runBenchmarks(int count); // prints benchmark info
};

#endif //BENCHMARKS_H

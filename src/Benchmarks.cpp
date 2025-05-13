// Benchmark file: generates fake alerts and tests the performance of my custom algorithm vs. a standard priority quuee
// Created by Kyngston Gaddy
// Date: 5/13/2025

// import statements
#include "../include/Benchmarks.h"
#include <iostream>
#include <queue>
#include "WeatherHeap.h"

/**
 * generates random alerts based on randomized weather conditions
 * @param count the number of alerts
 * @return the simulated alerts stored in a vector
 */
std::vector<WeatherAlerts> Benchmarks::generateAlerts(int count) {
    std::vector<WeatherAlerts> alerts;
    std::vector<std::string> conditions = {"Thunderstorm", "Drizzle", "Rain", "Snow", "Atmosphere","Clear", "Clouds",};
    for (int i = 0; i < count; i++) {
        int score = rand() % 5 + 1;
        std::string cond = conditions[rand() % conditions.size()];
        alerts.emplace_back(cond, "Simulated Alert: " + std::to_string(i), score);
    }
    return alerts;
}

/**
 * tests performance of custom weather heap
 * @param alerts the vector of simulated alerts
 * @return runtime performance: how long it took to execute
 */
double Benchmarks::benchmarksWeatherHeap(const std::vector<WeatherAlerts>& alerts) {
    WeatherHeap heap;
    auto start = std::chrono::high_resolution_clock::now();
    for (const auto& alert : alerts) {
        heap.insert(alert);
    }
    while (!heap.isEmpty()) {
        heap.extractMax();
    }

    auto end = std::chrono::high_resolution_clock::now();
    return std::chrono::duration<double, std::milli>(end - start).count();
}

/**
 * test performance of a standard priority queue
 * @param alerts vector of simulated alerts
 * @return runtime performance: how long it took to execute
 */
double Benchmarks::benchmarksWeatherPrioQueue(const std::vector<WeatherAlerts>& alerts) {
    auto comp = [](const WeatherAlerts& a, const WeatherAlerts& b) {
        return a.prioScore < b.prioScore;
    };
    std::priority_queue<WeatherAlerts, std::vector<WeatherAlerts>, decltype(comp)> heap(comp);
    auto start = std::chrono::high_resolution_clock::now();
    for (const auto& alert : alerts) {
        heap.push(alert);
    }
    while (!heap.empty()) {
        heap.pop();
    }

    auto end = std::chrono::high_resolution_clock::now();
    return std::chrono::duration<double, std::milli>(end - start).count();
}

/**
 * runs benchmark tests, prints results
 * @param count number of alerts to generate
 */
void Benchmarks::runBenchmarks(int count) {
    std::vector<WeatherAlerts> dataset = generateAlerts(count);
    double customTime = benchmarksWeatherHeap(dataset);
    double stdTime = benchmarksWeatherPrioQueue(dataset);
    std::cout << "----------------------------------------\n";
    std::cout << "Custom: " << customTime << "ms\n";
    std::cout << "Std: " << stdTime << "ms\n";
    std::cout << "Comparison (std/custom): " << (stdTime / customTime) << "x\n";
    unsigned long long throughput = count / (customTime / 1000);
    std::cout << "Throughput: " << throughput << " alerts/sec\n\n";
}
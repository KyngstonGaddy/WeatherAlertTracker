// Header file for WeatherHeap.cpp
// Created by Kyngston Gaddy
// Date: 5/13/2025

// import statements
#ifndef WEATHERHEAP_H
#define WEATHERHEAP_H
#include <vector>
#include "WeatherAlerts.h"

class WeatherHeap {
private:
    std::vector<WeatherAlerts> heap; // heap
    void heapUp(int i); // heaps up
    void heapDown(int i); // heaps down

public:
    WeatherHeap() = default; // default constructor
    void insert(const WeatherAlerts& alert); // inserts object into heap
    WeatherAlerts extractMax(); // extract object with highest priority score
    bool isEmpty() const; // checks if heap is empty
    int size() const; // checks size of heap
};

#endif // WEATHERHEAP_H

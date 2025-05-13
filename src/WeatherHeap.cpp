// Max Heap algorithm for program
// Created by Kyngston Gaddy
// Date: 5/13/2025

// import statements
#include "WeatherHeap.h"

/**
 * requires that each parent be greater than or equal to node
 * O(log n)
 * @param i index of inserted element
 */
void WeatherHeap::heapUp(int i) {
    while (i > 0 && heap[i] > heap[(i - 1)/2]) {
        std::swap(heap[i], heap[(i - 1)/2]);
        i = (i - 1)/2;
    }
}

/**
 * requires that each parent be less than or equal to node
 * O(log n)
 * @param i index of inserted element
 */
void WeatherHeap::heapDown(int i) {
    int size = heap.size();
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < size && heap[left] > heap[largest]) {
        largest = left;
    }
    if (right < size && heap[right] > heap[largest]) {
        largest = right;
    }
    if (largest != i) {
        std::swap(heap[i], heap[largest]);
        i = largest;
    }
}

/**
 * inserts new weather alert object into the heap and restores heap priority
 * O(log n)
 * @param alert weather alert
 */
void WeatherHeap::insert(const WeatherAlerts& alert) {
    heap.push_back(alert);
    heapUp(heap.size() - 1);
}

/**
 * returns and removes object with highest priority
 * O(log n)
 * @return object with highest priority
 */
WeatherAlerts WeatherHeap::extractMax() {
    if (heap.empty()) {
        throw std::runtime_error("The heap is empty.");
    }
    WeatherAlerts max = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapDown(0);
    return max;
}

/**
 * checks if heap is empty
 * O(1)
 * @return if heap is empty
 */
bool WeatherHeap::isEmpty() const {
    return heap.empty();
}

/**
 * # of elements in heap
 * O(1)
 * @return # of elements in heap
 */
int WeatherHeap::size() const {
    return heap.size();
}
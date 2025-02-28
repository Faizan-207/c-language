#include <iostream>
#include <chrono>
#include <thread>

void task() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Task executing in Single Thread: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Simulate work
    }
}

int main() {
    std::cout << "Single-threaded execution started.\n";
    task();
    std::cout << "Single-threaded execution finished.\n";
    return 0;
}
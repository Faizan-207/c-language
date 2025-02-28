#include <iostream>
#include <thread>
#include <chrono>

void task1() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Task 1 running: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void task2() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Task 2 running: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    std::cout << "Multi-threaded execution started.\n";
    
    // Creating two threads
    std::thread t1(task1);
    std::thread t2(task2);

    // Join the threads to the main thread
    t1.join();
    t2.join();

    std::cout << "Multi-threaded execution finished.\n";
    return 0;
}
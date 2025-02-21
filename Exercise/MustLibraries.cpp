#include <iostream>   // For input and output operations
#include <fstream>    // For file handling
#include <string>     // For string manipulations
#include <vector>     // For using the vector container
#include <algorithm>  // For algorithms like sort, find, etc.
#include <map>        // For using the map container
#include <set>        // For using the set container
#include <cmath>      // For mathematical functions
#include <ctime>      // For date and time functions
#include <thread>     // For multi-threading
#include <mutex>      // For thread synchronization
#include <chrono>     // For time utilities
#include <functional> // For function objects and bind
#include <memory>     // For smart pointers

using namespace std;
std::mutex mtx;

void threadFunction(int id) {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Thread " << id << " is running\n";
}

int main() {
    // iostream
    std::cout << "Hello, World!" << std::endl;

    // fstream
    std::ofstream file("example.txt");
    file << "Writing to a file.\n";
    file.close();

    // string
    std::string str = "Hello";
    str += ", World!";
    std::cout << str << std::endl;

    // vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);

    // algorithm
    std::sort(vec.begin(), vec.end());
    auto it = std::find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        std::cout << "Found 3 in vector.\n";
    }

    // map
    std::map<std::string, int> ages;
    ages["Alice"] = 30;
    ages["Bob"] = 25;

    // set
    std::set<int> uniqueNumbers = {1, 2, 3, 4, 5};
    uniqueNumbers.insert(6);

    // cmath
    double result = std::sqrt(16.0);
    std::cout << "Square root of 16 is " << result << std::endl;

    // ctime
    std::time_t now = std::time(0);
    std::cout << "Current time is " << std::ctime(&now);

    // thread
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);
    t1.join();
    t2.join();

    // chrono
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Elapsed time: " << elapsed.count() << " seconds\n";

    // functional
    std::function<int(int, int)> add = [](int a, int b) { return a + b; };
    std::cout << "Sum of 3 and 4 is " << add(3, 4) << std::endl;

    // memory
    std::unique_ptr<int> ptr = std::make_unique<int>(10);
    std::cout << "Value of unique_ptr is " << *ptr << std::endl;

    return 0;
}
//Smart Pointers (std::unique_ptr, std::shared_ptr)
//Smart pointers in C++ manage the lifetime of objects. They help prevent memory leaks and ensure proper resource management.

#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
};

int main() {
    std::unique_ptr<Resource> res = std::make_unique<Resource>();
    // Unique pointer automatically manages the Resource.
    return 0; // Resource will be destroyed automatically.
}




#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
};

int main() {
    std::shared_ptr<Resource> res1 = std::make_shared<Resource>();
    {
        std::shared_ptr<Resource> res2 = res1; // Shared ownership
        std::cout << "Shared count: " << res1.use_count() << '\n';
    }
    std::cout << "Shared count: " << res1.use_count() << '\n';
    return 0; // Resource will be destroyed when the last shared_ptr goes out of scope.
}





//Lambda Expressions and Functional Programming
//Lambda expressions provide a concise way to define anonymous functions in C++.


#include <iostream>

int main() {
    auto add = [](int a, int b) { return a + b; };
    std::cout << "Sum: " << add(5, 7) << '\n';
    return 0;
}




#include <iostream>

int main() {
    int x = 10, y = 20;
    auto captureSum = [x, &y]() { y += x; return y; };
    std::cout << "Updated y: " << captureSum() << '\n'; // y becomes 30
    return 0;
}






#include <iostream>
#include <thread>

void printSum(int a, int b) {
    std::cout << "Sum: " << a + b << '\n';
}

int main() {
    std::thread t(printSum, 5, 10);
    t.join();
    return 0;
}


//Introduction to C++11, C++14, and C++17 Features
//Example 1: auto and Range-based For Loop (C++11)/*
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (auto num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}



#include <iostream>
#include <optional>

std::optional<int> findNumber(bool exists) {
    if (exists) return 42;
    return std::nullopt;
}

int main() {
    auto result = findNumber(true);
    if (result) {
        std::cout << "Found: " << *result << '\n';
    } else {
        std::cout << "Number not found.\n";
    }
    return 0;
}

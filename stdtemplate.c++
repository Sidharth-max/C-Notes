/*Standard Template Library (STL) Overview
The Standard Template Library (STL) in C++ is a collection of template classes and functions that
 provide general-purpose containers, algorithms, and iterators. It helps
 in building efficient and reusable programs.

 STL Containers Overview
STL containers are data structures that store collections of objects. The main types are:

Sequence Containers: Store data in a linear fashion (e.g., vector, list, deque).
Associative Containers: Store data in key-value pairs (e.g., map, set).
Container Adaptors: Modify underlying containers to provide stack-like or queue-like behavior (e.g., stack, queue, priority_queue).
Common Containers
Vectors: Dynamic array that can grow/shrink in size.
Lists: Doubly linked list.
Maps: Key-value pairs with unique keys.
Queues and Stacks: Specialized containers for FIFO and LIFO operations.


 STL Algorithms
STL provides algorithms to perform common operations such as:

Sorting: std::sort
Searching: std::find, std::binary_search
Iterating: Applying functions to containers (std::for_each).


Iterators and Generic Programming
Iterators are objects used to traverse containers. They bridge the gap between containers and algorithms.

Types of Iterators
Input Iterator
Output Iterator
Forward Iterator
Bidirectional Iterator
Random Access Iterator



vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // Add elements
    vec.push_back(6);

    // Iterate using a for loop
    std::cout << "Vector elements: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Access elements
    cout << "Element at index 2: " << vec[2] << endl;

    // Remove an element
    vec.pop_back();
    cout << "After pop_back(), size: " << vec.size() << endl;

    return 0;
}


map:
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ageMap;

    // Insert elements
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    ageMap["Charlie"] = 20;

    // Iterate through the map
    cout << "Map contents:\n";
    for (auto it = ageMap.begin(); it != ageMap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // Access elements by key
    cout << "Bob's age: " << ageMap["Bob"] << endl;

    return 0;
}


sorting:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {4, 2, 8, 6, 1};

    // Sort the vector
    sort(nums.begin(), nums.end());

    // Print sorted vector
    cout << "Sorted numbers: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Find an element
    if (binary_search(nums.begin(), nums.end(), 6)) {
        cout << "6 found in the vector." << endl;
    } else {
        cout << "6 not found." << endl;
    }

    return 0;
}


queue
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Access front and pop elements
    while (!q.empty()) {
        cout << "Front: " << q.front() << ", Size: " << q.size() << endl;
        q.pop();
    }

    return 0;
}

*/

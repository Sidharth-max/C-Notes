/*Definition:
Coding standards and style guidelines are conventions that ensure code readability, maintainability, and consistency across projects. Adopting a consistent style helps teams work efficiently and reduces errors.

Key Points:

Use meaningful variable names (e.g., int count instead of int c).
Follow proper indentation and brace placement.
Prefer const for immutable variables.
Use comments for clarity.
Avoid magic numbers (use named constants).*/


#include <iostream>
using namespace std;

// Function to calculate the sum of an array
int calculateSum(const int* arr, int size) {
    int sum = 0;  // Initialize sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Add array elements
    }
    return sum;
}

int main() {
    const int arraySize = 5;
    int numbers[arraySize] = {1, 2, 3, 4, 5};

    // Calculate and display sum
    cout << "The sum is: " << calculateSum(numbers, arraySize) << endl;

    return 0;
}



/*Best Practices Followed:

Meaningful function and variable names.
Proper indentation.
Use of const for constants and immutable data.
 Debugging Techniques and Tools
Definition:
Debugging is the process of finding and fixing errors or bugs in a program. Tools like gdb (GNU Debugger) and IDE debuggers provide step-by-step execution and help inspect variable states.

Using gdb
Steps:
Compile the program with -g flag: g++ -g program.cpp.
Start gdb: gdb ./a.out.
Set breakpoints: break main.
Run the program: run.
Inspect variables: print var_name.
Code Example: Debugging with gdb*/



#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 0;
    cout << "Before division." << endl;
    int result = a / b;  // Division by zero (bug)
    cout << "Result: " << result << endl;
    return 0;
}

/*gdb Usage:

Compile: g++ -g program.cpp.
Debug:
gdb ./a.out
break main
run
print a
print b*/


 //Debugging with IDE (e.g., Visual Studio, CLion)

 #include <iostream>
using namespace std;

void divideNumbers(int a, int b) {
    if (b == 0) {
        cout << "Cannot divide by zero." << endl;
        return;
    }
    cout << "Result: " << a / b << endl;
}

int main() {
    int x = 10, y = 0;
    divideNumbers(x, y);  // Set breakpoint here
    return 0;
}



/*Performance Optimization Tips
Definition:
Performance optimization improves the efficiency of a program by reducing execution time, memory usage, or resource consumption.

Key Tips:

Avoid unnecessary computations and loops.
Use efficient algorithms and data structures.
Use move semantics and rvalue references to avoid copying large objects.
Minimize dynamic memory allocation where possible.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(1000000, 1);

    // Optimized summation using iterators
    int sum = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        sum += *it;
    }

    cout << "Sum: " << sum << endl;
    return 0;
}





#include <iostream>
using namespace std;

int computeFactorial(int n) {
    static int factorials[10] = {1};  // Precomputed factorials
    if (factorials[n] != 0) return factorials[n];

    factorials[n] = n * computeFactorial(n - 1);
    return factorials[n];
}

int main() {
    cout << "Factorial of 5: " << computeFactorial(5) << endl;
    return 0;
}







#include <iostream>
#include <vector>
using namespace std;

vector<int> createLargeVector() {
    vector<int> data(1000000, 42);
    return data;  // Move semantics used here
}

int main() {
    vector<int> myVector = createLargeVector();
    cout << "Vector size: " << myVector.size() << endl;
    return 0;
}

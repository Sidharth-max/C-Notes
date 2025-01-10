/*Exception Handling in C++
Exception handling in C++ allows you to manage runtime errors gracefully without terminating the program unexpectedly. The mechanism involves the try-catch block and the throw keyword.


Understanding Exceptions and Try-Catch Blocks
An exception is an event that occurs during the execution of a program and disrupts its normal flow.

try block: Code that might throw an exception is placed inside a try block.
catch block: Code to handle the exception is written in a catch block*/


#include <iostream>
using namespace std;

int main() {
    try {
        int num1 = 10, num2 = 0;
        if (num2 == 0) {
            throw "Division by zero exception!";
        }
        cout << "Result: " << num1 / num2 << endl;
    } catch (const char* e) {
        cout << "Caught an exception: " << e << endl;
    }

    cout << "Program continues after handling exception." << endl;
    return 0;
}



/*If num2 is 0, an exception is thrown.
The catch block catches the exception and displays an error message.


Throwing and Catching Exceptions
An exception is thrown using the throw keyword and can be caught using catch. You can throw:

Built-in data types (e.g., int, char).
Objects of a class.*/

#include <iostream>
using namespace std;

void testFunction(int value) {
    if (value < 0) {
        throw value;  // Throwing an integer exception
    } else if (value == 0) {
        throw "Zero is not allowed!";  // Throwing a string exception
    } else {
        cout << "Value is valid: " << value << endl;
    }
}

int main() {
    try {
        testFunction(-5);  // Passing a negative value
    } catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    } catch (const char* e) {
        cout << "Caught a string exception: " << e << endl;
    }

    return 0;
}



/*Different types of exceptions are thrown (int and const char*).
Multiple catch blocks are used to handle each type.

. Handling Exceptions in Functions
Exceptions can be thrown and caught within or outside functions. A function can:

Throw exceptions using throw.
Be declared with a throw() specification (deprecated in modern C++).*/


#include <iostream>
using namespace std;

double divid(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero!");
    }
    return static_cast<double>(a) / b;
}


int main() {
    try {
        cout << "Result: " << divid(10, 0) << endl;  // Will throw an exception
    } catch (const runtime_error& e) {
        cout << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}

/*
The divide function throws a runtime_error exception if b == 0.
The main function catches and handles the exception using e.what().*/
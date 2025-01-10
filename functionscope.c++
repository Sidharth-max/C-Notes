/*Defining and Calling Functions
Functions in Python are defined using the def keyword. They are called by their name followed by parentheses.*/


#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    greet(); // Function call
    return 0;
}



#include <iostream>
using namespace std;

void displayMessage(string message) {
    cout << message << endl;
}

int main() {
    displayMessage("Welcome to C++ programming!");
    return 0;
}





#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 7);
    cout << "Sum: " << sum << endl;
    return 0;
}


#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello, C++!" << endl;
}

int main() {
    sayHello();
    return 0;
}



#include <iostream>
using namespace std;

void printLine(string line = "Default Line") {
    cout << line << endl;
}

int main() {
    printLine();
    printLine("Custom Line");
    return 0;
}


//pass by value
/*
#include <iostream>
using namespace std;

void increment(int num) {
    num += 5;
    cout << "Inside Function: " << num << endl;
}

int main() {
    int value = 10;
    increment(value);
    cout << "Outside Function: " << value << endl; // Value remains unchanged
    return 0;
}
*/


//pass by reference
#include <iostream>
using namespace std;

void increment(int &num) {
    num += 5;
}

int main() {
    int value = 10;
    increment(value);
    cout << "Value after increment: " << value << endl; // Value is updated
    return 0;
}


#include <iostream>
using namespace std;

struct Result {
    int sum;
    int product;
};

Result calculate(int a, int b) {
    Result res;
    res.sum = a + b;
    res.product = a * b;
    return res;
}

int main() {
    Result res = calculate(3, 4);
    cout << "Sum: " << res.sum << ", Product: " << res.product << endl;
    return 0;
}



/*Function Overloading
Function overloading allows functions to have the same name but different parameters.*/


#include <iostream>
using namespace std;

void print(int a) {
    cout << "Integer: " << a << endl;
}

void print(int a, int b) {
    cout << "Two Integers: " << a << ", " << b << endl;
}

int main() {
    print(5);
    print(3, 7);
    return 0;
}




#include <iostream>
using namespace std;

void print(int a) {
    cout << "Integer: " << a << endl;
}

void print(double a) {
    cout << "Double: " << a << endl;
}

int main() {
    print(5);
    print(5.5);
    return 0;
}




#include <iostream>
using namespace std;

void print(int a) {
    cout << "Integer: " << a << endl;
}

void print(double a) {
    cout << "Double: " << a << endl;
}

int main() {
    print(5);
    print(5.5);
    return 0;
}


#include <iostream>
using namespace std;

void display(int arr[], int size) {
    cout << "Integer Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void display(double arr[], int size) {
    cout << "Double Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {1, 2, 3};
    double doubleArr[] = {1.1, 2.2, 3.3};
    display(intArr, 3);
    display(doubleArr, 3);
    return 0;
}




/*Variable Scope (Local vs Global)*/
//local
#include <iostream>
using namespace std;

void func() {
    int x = 10; // Local variable
    cout << "Inside func: " << x << endl;
}

int main() {
    func();
    // cout << x; // Error: x is not accessible here
    return 0;
}



//global 
#include <iostream>
using namespace std;

int x = 20; // Global variable

void func() {
    cout << "Inside func: " << x << endl;
}

int main() {
    cout << "In main: " << x << endl;
    func();
    return 0;
}



//local and global 
#include <iostream>
using namespace std;

int x = 20; // Global variable

void func() {
    int x = 10; // Local variable
    cout << "Local x: " << x << endl;
    cout << "Global x using :: " << ::x << endl;
}

int main() {
    func();
    return 0;
}



#include <iostream>
using namespace std;

int x = 20; // Global variable

void func() {
    int x = 10; // Local variable
    cout << "Local x: " << x << endl;
    cout << "Global x using :: " << ::x << endl;
}

int main() {
    func();
    return 0;
}




#include <iostream>
using namespace std;

int x = 5; // Global variable

void modifyGlobal() {
    x += 10; // Modifying global variable
}

int main() {
    cout << "Before: " << x << endl;
    modifyGlobal();
    cout << "After: " << x << endl;
    return 0;
}

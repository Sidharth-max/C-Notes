/*Arithmetic Operators*/
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << "Addition: " << a + b << endl; // Addition
    cout << "Multiplication: " << a * b << endl; // Multiplication
    return 0;
}



//Relational (Comparison) Operators
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    cout << "Is a greater than b? " << (a > b) << endl; // Greater than
    cout << "Is a equal to b? " << (a == b) << endl; // Equal to
    return 0;
}


//Logical Operators
#include <iostream>
using namespace std;

int main() {
    bool x = true, y = false;
    cout << "Logical AND: " << (x && y) << endl; // Logical AND
    cout << "Logical OR: " << (x || y) << endl;  // Logical OR
    return 0;
}



 //Assignment Operators
 #include <iostream>
using namespace std;

int main() {
    int a = 10, b;
    b = a; // Assignment
    cout << "b after assignment: " << b << endl;
    b += 5; // Add and assign
    cout << "b after adding 5: " << b << endl;
    return 0;
}


//Unary Operators
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << "Post-increment: " << a++ << endl; // Post-increment
    cout << "Pre-increment: " << ++a << endl;  // Pre-increment
    return 0;
}


//Ternary Operator
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    cout << "Larger value: " << (a > b ? a : b) << endl; // Ternary operator
    return 0;
}
/*Type Casting and Type Conversion
Definition:
Type Casting: Explicitly converting one data type to another.*/
//implicit

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = a; // Implicit conversion
    cout << "Value of b: " << b << endl;
    return 0;
}

//explicit
#include <iostream>
using namespace std;
int main() {
    float a = 10.5;
    int b = (int)a; // Explicit casting
    cout << "Value of b: " << b << endl;
    return 0;
}

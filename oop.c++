/*Object-Oriented Programming (OOP) Basics
OOP is a programming paradigm that uses the concept of classes and objects to model real-world entities. It focuses on organizing
 code into reusable units with attributes (data) and behaviors (functions).*/

//Classes and Objects

/*A class is a blueprint for creating objects.
An object is an instance of a class, containing specific data and behaviors defined by the class.*/

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.year = 2021;
    car1.displayInfo();

    return 0;
}





/*Constructors and Destructors

A constructor is a special member function automatically called when an object is created. It is used to initialize the object.
A destructor is a special member function automatically called when an object is destroyed. It is used for cleanup operations.*/


#include <iostream>
using namespace std;

class Person {
public:
    string name;

    // Constructor
    Person(string personName) {
        name = personName;
        cout << "Constructor: " << name << " created." << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor: " << name << " destroyed." << endl;
    }
};

int main() {
    Person p1("Alice");
    Person p2("Bob");
    return 0;
}




/*Encapsulation and Access Specifiers

Encapsulation is the bundling of data (attributes) and methods (functions) that operate on the data into a single unit, typically a class.
Access specifiers define the accessibility of class members:
Public: Accessible from anywhere.
Private: Accessible only within the class.
Protected: Accessible within the class and derived classes.*/



#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Private: Hidden from outside

public:
    BankAccount() {
        balance = 0.0; // Default balance
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", Balance: " << balance << endl;
        }
    }

    double getBalance() {
        return balance; // Public getter to access private data
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.withdraw(500);
    account.withdraw(600);
    return 0;
}



/*Classes and Objects provide the structure for OOP.
Constructors and Destructors handle initialization and cleanup.
Encapsulation protects data and ensures controlled access using Access Specifiers like public, private, and protected.*/



/*Inheritance and Polymorphism in C++
1. Inheritance
Inheritance is a mechanism by which one class (the derived class) can inherit the properties and methods of another class (the base class). It promotes code reusability and establishes a parent-child relationship.

Base Class: The class being inherited from.
Derived Class: The class that inherits.
Types of Inheritance:

Single Inheritance
Multilevel Inheritance
Multiple Inheritance
Hierarchical Inheritance
*/


#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// Derived Class
class D : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof Woof!" << endl;
    }
};

int main() {
    D d1;
   // d1.eat();  // Inherited from Animal
   // d1.sleep(); // Inherited from Animal
   // d1.bark(); // From D
    return 0;
}





/*Polymorphism
Polymorphism means "many forms." It allows functions or methods to behave differently based on the objects that call them. In C++, this is often achieved through function overriding.

Function Overriding: A derived class provides its specific implementation for a method already defined in the base class.*/


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animals make sounds!" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dogs bark!" << endl;
    }
};

int main() {
    Animal *animal;   // Base class pointer
    Dog dog;
    animal = &dog;

    animal->sound();  // Calls the overridden method in Dog
    return 0;
}




/*
 Virtual Functions and Abstract Classes
Virtual Functions: Methods in the base class marked with the virtual keyword. They allow runtime polymorphism.
Abstract Classes: A class that has at least one pure virtual function (= 0). You cannot instantiate abstract classes*/



#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle!" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square!" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;
    return 0;
}



/*
Operator Overloading
Operator overloading allows custom definitions for C++ operators, making them work with user-defined types like classes.*/


#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2; // Using overloaded +
    c3.display();
    return 0;
}







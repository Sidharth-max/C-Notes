/*Looping Constructs
a) For Loop
The for loop executes a block of code repeatedly for a fixed number of iterations.*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    cout << "Factorial: " << fact << endl;
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}




/*while :-The while loop executes a block of code repeatedly as long as the condition is true.*/



#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
        ++i;
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}




 /*Do-While Loop
The do-while loop executes the block of code at least once before checking the condition*/


#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << " ";
        ++i;
    } while (i <= 5);
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "1. Hello\n2. Exit\nEnter your choice: ";
        cin >> choice;
        if (choice == 1) cout << "Hello, World!" << endl;
    } while (choice != 2);
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    do {
        cout << "Enter a positive number (or negative to stop): ";
        cin >> num;
        if (num >= 0) sum += num;
    } while (num >= 0);

    cout << "Total sum: " << sum << endl;
    return 0;
}



/*break and continue
Break and Continue Statements
Break: Exits the loop immediately.
Continue: Skips the rest of the current iteration and proceeds with the next.*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) break;
        cout << i << " ";
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) continue;
        cout << i << " ";
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; ++i) {
        if (i % 7 == 0) {
            cout << "First number divisible by 7: " << i << endl;
            break;
        }
    }
    return 0;
}




/* Decision-making with if-else Statements
if-else statements allow the program to make decisions and execute a block of code based on a condition.*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 75) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: C" << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive number" << endl;
    } else if (num < 0) {
        cout << "Negative number" << endl;
    } else {
        cout << "Zero" << endl;
    }
    return 0;
}



/*Switch-case Statements
The switch statement allows multi-way branching based on the value of a variable.*/


#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid day number" << endl;
    }
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Add\n2. Subtract\n3. Multiply\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Addition selected" << endl; break;
        case 2: cout << "Subtraction selected" << endl; break;
        case 3: cout << "Multiplication selected" << endl; break;
        default: cout << "Invalid choice" << endl;
    }
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel" << endl; break;
        default:
            cout << "Consonant" << endl;
    }
    return 0;
}


//break and continue;

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

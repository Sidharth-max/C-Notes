 /*Arrays and Pointers
Definition:

Arrays: Collections of elements (of the same type) stored in contiguous memory locations. They allow accessing elements using an index.
Pointers: Variables that store memory addresses, commonly used to reference array elements or dynamically allocated memory.*/


#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
      std::  cout << "Element " << i << ": " << arr[i] << endl;
    }
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr; // Points to the first element
    for (int i = 0; i < 3; ++i) {
      std::  cout << "Value: " << *(ptr + i) << " at Address: " << (ptr + i) << endl;
    }
    return 0;
}




#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
       std:: cout << arr[i] << " ";
    }
   std:: cout << endl;
}

int main() {
    int numbers[] = {5, 10, 15};
    printArray(numbers, 3);
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int* ptr = arr;
   std:: cout << "First: " << *ptr << endl;
    ptr++;
   std:: cout << "Second: " << *ptr << endl;
    return 0;
}




/*Declaring and Using Arrays
Definition: Arrays can be declared by specifying the type, name, and size. Accessing elements is done via indices starting at 0.*/


#include <iostream>
using namespace std;

int main() {
    int nums[4] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++) {
       std:: cout << nums[i] << " ";
    }
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int nums[5];
     std::cout << "Enter 5 numbers:" ;
    for (int i = 0; i < 5; ++i) {
        cin >> nums[i];
    }
    std::cout << "You entered: ";
    for (int i = 0; i < 5; ++i) {
       std:: cout << nums[i] << " ";
    }
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int nums[] = {10, 20, 30};
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += nums[i];
    }
    std::cout << "Sum: " << sum << endl;
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4};
    for (int i = 3; i >= 0; --i) {
      std::  cout << nums[i] << " ";
    }
    return 0;
}



/*Multi-Dimensional Arrays
Definition: Multi-dimensional arrays are arrays with more than one index, like matrices (2D arrays).*/

#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
      std::  cout << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int sum = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sum += matrix[i][j];
        }
    }
   std:: cout << "Sum: " << sum << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int matrix[2][2];
  std::  cout << "Enter elements for a 2x2 matrix:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
   std:: cout << "Transpose:" ;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           std:: cout << matrix[j][i] << " ";
        }
        
    
    return 0;
}

 /*Dynamic Memory Allocation
Definition:

Dynamic Memory Allocation: Allocating memory during runtime using new and freeing it with delete.*/


#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 42;
   std:: cout << "Value: " << *ptr ;
    delete ptr;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3];
    arr[0] = 10; arr[1] = 20; arr[2] = 30;
    for (int i = 0; i < 3; ++i) {
     std::   cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int** matrix = new int*[2];
    for (int i = 0; i < 2; ++i) {
        matrix[i] = new int[2];
    }

    // Initialize
    matrix[0][0] = 1; matrix[0][1] = 2;
    matrix[1][0] = 3; matrix[1][1] = 4;

    // Print
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           std:: cout << matrix[i][j] << " ";
        }
       std:: cout;
    }

    // Free memory
    for (int i = 0; i < 2; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}



#include <iostream>
using namespace std;

void createArray() {
    int* arr = new int[5];
    delete[] arr; // Properly free memory
}

int main() {
    createArray();
   std:: cout << "Memory cleaned up properly." ;
    return 0;
}

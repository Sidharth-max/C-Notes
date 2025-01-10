/*File I/O Operations in C++
File I/O (Input/Output) operations in C++ are performed using file streams, which allow reading from and writing to files. These are defined in the <fstream> header.
 File Streams
C++ provides the following file stream classes:

ifstream (Input File Stream): Used to read data from files.
ofstream (Output File Stream): Used to write data to files.
fstream (File Stream): Allows both input and output operations on the same file.


Reading from and Writing to Files
Reading from Files
Use ifstream to open a file in read mode.
Check if the file is open before reading data.
Use >> or getline() for reading.
Writing to Files
Use ofstream to open a file in write mode.
Write data using <<.


Error Handling with File Operations
Use the is_open() method to check if the file was successfully opened.
Use error flags like eof(), fail(), or bad() to handle specific issues.*/


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file using ofstream
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, File I/O in C++!\n";
        outFile << "This is a second line.\n";
        outFile.close();
        cout << "Data written to file.\n";
    } else {
        cout << "Error opening file for writing.\n";
    }

    // Reading from a file using ifstream
    ifstream inFile("example.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file for reading.\n";
    }

    return 0;
}


//reading and writing _GLIBCXX_BASIC_FILE_STDIO_H#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::trunc);

    if (file.is_open()) {
        // Write to the file
        file << "Line 1: Using fstream for I/O.\n";
        file << "Line 2: File streams are versatile.\n";

        // Move the file pointer to the beginning
        file.seekg(0);

        // Read from the file
        string line;
        cout << "Reading from file:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    } else {
        cout << "Failed to open the file.\n";
    }

    return 0;
}


error handling
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("nonexistent.txt");

    // Error handling: Check if the file exists and is open
    if (!file.is_open()) {
        cerr << "Error: File could not be opened.\n";
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Check for file reading errors
    if (file.eof()) {
        cout << "End of file reached.\n";
    } else if (file.fail()) {
        cerr << "Error: File read operation failed.\n";
    } else if (file.bad()) {
        cerr << "Error: Irrecoverable file stream error.\n";
    }

    file.close();
    return 0;
}


File Streams:

/*Use ifstream or ofstream for basic file I/O.
Use fstream for combined read-write operations.
Reading and Writing:

Writing is done with <<, and reading with >> or getline().
Error Handling:

is_open() ensures the file can be accessed.
Flags like eof(), fail(), or bad() provide detailed error information
*/


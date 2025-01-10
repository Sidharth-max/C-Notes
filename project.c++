#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Book class
class Book {
public:
    string bookID;
    string title;
    string author;
    int quantity;

    // Constructor
    Book(string bID, string t, string a, int q) {
        bookID = bID;
        title = t;
        author = a;
        quantity = q;
    }

    // Display book information (marked as const)
    void displayBook() const {
        cout << "Book ID: " << bookID << "\nTitle: " << title 
             << "\nAuthor: " << author << "\nQuantity: " << quantity << endl;
    }
};

// Library class
class Library {
    vector<Book> books;

public:
    // Add a new book
    void addBook() {
        string bookID, title, author;
        int quantity;
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Quantity: ";
        cin >> quantity;

        books.emplace_back(bookID, title, author, quantity);
        cout << "Book added successfully!" << endl;
    }

    // Display all books
    void displayBooks() const {
        if (books.empty()) {
            cout << "No books in the library." << endl;
            return;
        }
        for (const auto &book : books) {
            book.displayBook();
            cout << "------------------------" << endl;
        }
    }

    // Search for a book by ID
    void searchBook() const {
        string bookID;
        cout << "Enter Book ID to search: ";
        cin >> bookID;

        for (const auto &book : books) {
            if (book.bookID == bookID) {
                cout << "Book Found:" << endl;
                book.displayBook();
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    // Update book quantity
    void updateBookQuantity() {
        string bookID;
        int newQuantity;
        cout << "Enter Book ID to update: ";
        cin >> bookID;

        for (auto &book : books) {
            if (book.bookID == bookID) {
                cout << "Enter new quantity: ";
                cin >> newQuantity;
                book.quantity = newQuantity;
                cout << "Book quantity updated successfully!" << endl;
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    // Save data to file
    void saveToFile() const {
        ofstream outFile("library_data.txt");
        if (!outFile) {
            cout << "Error opening file to save data!" << endl;
            return;
        }

        for (const auto &book : books) {
            outFile << book.bookID << "," << book.title << "," 
                    << book.author << "," << book.quantity << endl;
        }
        outFile.close();
        cout << "Data saved successfully!" << endl;
    }

    // Load data from file
    void loadFromFile() {
        ifstream inFile("library_data.txt");
        if (!inFile) {
            cout << "Error opening file to load data!" << endl;
            return;
        }

        books.clear();
        string bookID, title, author, quantityStr;
        while (getline(inFile, bookID, ',') && 
               getline(inFile, title, ',') && 
               getline(inFile, author, ',') && 
               getline(inFile, quantityStr)) {
            books.emplace_back(bookID, title, author, stoi(quantityStr));
        }
        inFile.close();
        cout << "Data loaded successfully!" << endl;
    }
};

// Main Function
int main() {
    Library library;
    int choice;

    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n2. Display All Books\n3. Search Book\n";
        cout << "4. Update Book Quantity\n5. Save Data\n6. Load Data\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            library.addBook();
            break;
        case 2:
            library.displayBooks();
            break;
        case 3:
            library.searchBook();
            break;
        case 4:
            library.updateBookQuantity();
            break;
        case 5:
            library.saveToFile();
            break;
        case 6:
            library.loadFromFile();
            break;
        case 7:
            cout << "Exiting program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

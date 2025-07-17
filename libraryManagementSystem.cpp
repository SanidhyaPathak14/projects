#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Book Class
class Book {
private:
    int bookID;
    string title;
    string author;
    bool isBorrowed;

public:
    Book(int id, string t, string a) : bookID(id), title(t), author(a), isBorrowed(false) {}

    int getID() const { return bookID; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    bool getStatus() const { return isBorrowed; }

    void borrowBook() {
        if (!isBorrowed) {
            isBorrowed = true;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "Book is already borrowed.\n";
        }
    }

    void returnBook() {
        if (isBorrowed) {
            isBorrowed = false;
            cout << "Book returned successfully.\n";
        } else {
            cout << "Book was not borrowed.\n";
        }
    }

    void display() const {
        cout << "ID: " << bookID
             << ", Title: " << title
             << ", Author: " << author
             << ", Status: " << (isBorrowed ? "Borrowed" : "Available") << endl;
    }
};

// Library Class
class Library {
private:
    vector<Book> books;

public:
    void addBook() {
        int id;
        string title, author;
        cout << "Enter book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        books.emplace_back(id, title, author);
        cout << "Book added successfully.\n";
    }

    void displayBooks() const {
        if (books.empty()) {
            cout << "No books in the library.\n";
            return;
        }
        for (const auto& book : books) {
            book.display();
        }
    }

    void borrowBook() {
        int id;
        cout << "Enter book ID to borrow: ";
        cin >> id;
        for (auto& book : books) {
            if (book.getID() == id) {
                book.borrowBook();
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook() {
        int id;
        cout << "Enter book ID to return: ";
        cin >> id;
        for (auto& book : books) {
            if (book.getID() == id) {
                book.returnBook();
                return;
            }
        }
        cout << "Book not found.\n";
    }
};

// Main Function
int main() {
    Library lib;
    int choice;

    do {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: lib.addBook(); break;
        case 2: lib.displayBooks(); break;
        case 3: lib.borrowBook(); break;
        case 4: lib.returnBook(); break;
        case 5: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

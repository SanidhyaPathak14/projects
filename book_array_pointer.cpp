#include <iostream>
#include <string>

using namespace std;

// Book class definition
class Book {
private:
    string title;
    string author;
    int year;

public:
    void setDetails(const string& t, const string& a, int y) {
        title = t;
        author = a;
        year = y;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << "------------------------" << endl;
    }
};


int main() {
    int numBooks;

    cout << "Enter number of books: ";
    cin >> numBooks;


    Book* books = new Book[numBooks];

    
    for (int i = 0; i < numBooks; ++i) {
        string title, author;
        int year;

        cin.ignore(); 
        cout << "\nEnter details for book " << i + 1 << ":\n";
        cout << "Title: ";
        getline(cin, title);
        cout << "Author: ";
        getline(cin, author);
        cout << "Year: ";
        cin >> year;

        books[i].setDetails(title, author, year);
    }

    
    cout << "\n--- Book Details ---\n";
    for (int i = 0; i < numBooks; ++i) {
        books[i].display();
    }

    
    delete[] books;

    return 0;
}

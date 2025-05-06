#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    int lineCount = 0;

    cout << "Enter multiple lines of text (press Enter on an empty line to stop):\n";

    while (true) {
        getline(cin, line);

        if (line.empty()) {
            break; // Stop when user inputs an empty line
        }

        cout << "Line " << ++lineCount << ": " << line << endl;
    }

    cout << "\nYou entered " << lineCount << " line(s) of text." << endl;

    return 0;
}

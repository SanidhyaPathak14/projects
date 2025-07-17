#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to hold course info
class Subject {
public:
    string name;
    char grade; // A, B, C, D, F
    int credits;

    int getGradePoints() const {
        switch (grade) {
            case 'A': return 10;
            case 'B': return 8;
            case 'C': return 6;
            case 'D': return 4;
            case 'F': return 0;
            default: return 0;
        }
    }
};

float calculateGPA(const vector<Subject>& subjects) {
    int totalCredits = 0;
    float totalPoints = 0.0;

    for (const auto& subject : subjects) {
        int gradePoints = subject.getGradePoints();
        totalPoints += gradePoints * subject.credits;
        totalCredits += subject.credits;
    }

    if (totalCredits == 0) return 0;
    return totalPoints / totalCredits;
}

int main() {
    vector<Subject> subjects;
    int n;

    cout << "Enter number of subjects: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Subject s;
        cout << "\nEnter subject " << i + 1 << " name: ";
        cin.ignore();
        getline(cin, s.name);
        cout << "Enter grade (A/B/C/D/F): ";
        cin >> s.grade;
        cout << "Enter credit hours: ";
        cin >> s.credits;
        subjects.push_back(s);
    }

    float gpa = calculateGPA(subjects);
    cout << "\n📊 Your GPA is: " << gpa << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function to swap values using pointers
void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Main function
int main() {
    int x = 10, y = 20;

    cout << "Before swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Call swap function using pointers
    swapValues(&x, &y);

    cout << "After swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

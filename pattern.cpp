//  diamond pattern AND pyramid pattern/.........

#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for the number of rows for the upper half (middle included)
    cout << "Enter the number : ";
    cin >> n;

    // Upper half including the middle row
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* ";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

// 2........... ******* tilt diamond pattern *************
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "enter an n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         { // prints (forward) right angle triangle
//             cout << " * ";
//         }
//         cout << endl;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         { // prints (reverse) right angle triangle
//             cout << " * ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;        // this code prints the pattern .....123/456/789.....
// int main()
// {
//     // int n=3;
//     // int num=1;

//     int  n=3;
//     int num=1;

    

//     for (int i=0; i<n; i++){  
//     for (int j=0; j<n; j++){
//         cout<<num <<" ";
//         num++;
//     }
//      cout<<endl;
// }


//  char  n=3;                  //  ******* this code print the pattern abc/def/ghi  ******
//     char ch='A';

    

//     for (int i=0; i<n; i++){  
//     for (int j=0; j<n; j++){
//         cout<<ch <<" ";
//         ch++;
//     }
//      cout<<endl;
// }


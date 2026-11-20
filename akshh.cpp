#include <iostream>

using namespace std;

int main() {
    int marks;

    cout << "Enter the student's marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100." << endl;
    } 
    else if (marks >= 90) {
        cout << "Grade: A" << endl;
    } 
    else if (marks >= 75) {
        cout << "Grade: B" << endl;
    } 
    else if (marks >= 65) {
        cout << "Grade: C" << endl;
    } 
    else if (marks >= 55) {
        cout << "Grade: D" << endl;
    } 
    else if (marks >= 40) {
        cout << "Grade: E" << endl;
    } 
    else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
#include <iostream>
#include "1.h"
using namespace std;

int main() {
    student s;

    // Test Case 1
    s.setage(10);
    if(s.getage() == 20) {   // 10 + 10
        cout << "Test Case 1 Passed!" << endl;
    } else {
        cerr << "Test Case 1 Failed!" << endl;
        return 1;
    }

    // Test Case 2
    s.setage(0);
    if(s.getage() == 10) {   // 0 + 10
        cout << "Test Case 2 Passed!" << endl;
    } else {
        cerr << "Test Case 2 Failed!" << endl;
        return 1;
    }

    cout << "All Tests Passed!" << endl;
    return 0;
}

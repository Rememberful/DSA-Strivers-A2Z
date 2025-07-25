#include <iostream>
using namespace std;

void printCenteredPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        printCenteredPyramid(n);
        if (test != t - 1) {
            cout << endl; // Separate test cases with an empty line
        }
    }

    return 0;
}

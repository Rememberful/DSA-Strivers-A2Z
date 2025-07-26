#include <iostream>
using namespace std;

// int revNum(int n) {
//     int rev = 0;
//     while (n > 0) {
//         int lastDigit = n % 10;
//         rev = rev * 10 + lastDigit;
//         n /= 10;
//     }
//     cout << rev << endl; // Output the reversed number  
// }

int revNum(int n) {
    int rev = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }
    return rev; // Output the reversed number  
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    { 
        int n;
        cin >> n;
        cout <<revNum(n) << endl; // Output the reversed number
    }

    return 0;
}

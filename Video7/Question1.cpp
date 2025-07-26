#include <iostream>
#include <cmath> // For log10 function
using namespace std;

// void countdigits(int n){
//     int count = 0;
//     while (n > 0) {
//         int lastdigit = n%10;
//         count = count +1;
//         n = n/10;
//    }
//    cout << count << endl;   
// }

// int countdigits(int n){
//     int count = 0;
//     while (n > 0) {
//         int lastdigit = n % 10;
//         count++;
//         n /= 10;
//     }
//     cout << count << endl;   
//     return count; // Return the count of digits
// }  

// int countdigits(long long x) {
//     if (x == 0) return 1;
//     int count = 0;
//     while (x > 0) {
//         count++;
//         x /= 10;
//     }
//     cout << count << endl;
//     //return count;
// }

int countdigits(int n){

    int cnt = (int)log10(n) + 1; // Using log10 to count digits
    cout << cnt << endl; // Output the count of digits
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
        countdigits(n);
    }

    return 0;
}

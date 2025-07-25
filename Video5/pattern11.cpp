#include <iostream>
using namespace std;

void printstar(int n){
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // Print increasing numbers from 1 to i
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Print spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // Print decreasing numbers from i to 1
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        spaces -= 2;
    }  
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
        printstar(n);
    }

    return 0;
}

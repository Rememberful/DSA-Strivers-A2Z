#include <iostream>
using namespace std;

void printstar(int n){
    int iniS = 0;

    // Top half
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }

    // Bottom half
    iniS = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
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

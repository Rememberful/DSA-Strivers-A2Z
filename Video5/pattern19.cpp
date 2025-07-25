#include <iostream>
using namespace std;

void printstar(int n){
    int spaces = 2 * n - 2;
    for (int i = 1; i <=2*n-1; i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for(int j=1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
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

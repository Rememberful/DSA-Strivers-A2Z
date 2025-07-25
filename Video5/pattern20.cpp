#include <iostream>
using namespace std;

void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==0||j==0||i==n-1||j==n-1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
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

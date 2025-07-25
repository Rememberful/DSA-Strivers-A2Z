#include <iostream>
using namespace std;

void printstar(int n){
        int start =1;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0) start = 1;
            else start = 0;
            for (int j = 0; j<=i; j++)
            {
                cout << start;
                start = 1 - start; // Toggle between 0 and 1
            } 
            cout << endl;
        }
        
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout.flush();
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

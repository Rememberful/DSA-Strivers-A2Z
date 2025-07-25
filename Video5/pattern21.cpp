#include <iostream>
using namespace std;

void printstar(int n){
    for (int i = 0; i < 2*n-1; i++)
    {
       for (int j = 0; j < 2*n-1;j++)
       {
        int top = i;
        int left = j;
        int bottom = (2*n-2)-i;   
        int right = (2*n-2)-j;
        cout << n - min(min(top, left), min(bottom, right)) << " ";
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

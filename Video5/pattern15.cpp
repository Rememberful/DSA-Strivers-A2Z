#include <iostream>
using namespace std;

void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A'+i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            
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

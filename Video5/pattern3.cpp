#include <iostream>
using namespace std;

void printstar(int n){
    for(int i = 1; i <=n; i++) {
        for (int j = 1; j <=i; j++)
        {
            cout << i << "";
        }
        cout<<endl;
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

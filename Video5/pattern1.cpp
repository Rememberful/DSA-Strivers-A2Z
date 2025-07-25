#include <iostream>
using namespace std;

// int main(){
//     for(int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << "*";
//         }
//         cout<<endl;
//     }
// }

//Using the functions 
void printstar(int n){
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout.flush();
    int n;
    cin >> n;
    printstar(n);
    return 0;
}

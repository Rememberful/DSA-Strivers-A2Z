#include <iostream>
#include <fstream>

#include <bits/stdc++.h>
using namespace std;

// int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cout.flush();
    // cout << "hey string1" << endl;
    // cout << "hey aditya" << "\n";
    // cout << "hey string1" << endl;

    // cout << "Hey" << "\n" << "aditya" << endl;

    //taking the input in the C++
    // int x;
    // cin >> x;
    // cout << "The value of x is: " << x;

    // int x,y;
    // cin >> x >> y;
    // cout << "The value of x is " << x << " and y is " << y;

    //data types
    // int x = 3;
    // float y = 5.01;
    // double z = 2;
    // cout << "Value of z is " << z;

    //string 

    // string s;
    // cin >> s;
    // cout << "The given string is " << s;

    //two strings
    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << "The s1 is " << s1 << " " << "The s2 is " << s2;

    //problem 
    // string s1;
    // string s2;
    // cin >> s1 >> s2;
    // cout << s1 << s2;

    //solution
    // string str;
    // getline(cin, str);
    // cout << str;

    //character 
    // char ch;
    // cin >> ch;
    // cout << ch;

    //if else statement
    // int age;
    // cin >> age;
    // cout << "You entered age as " << age << endl;
    // if(age>=18){
    //     cout << "You can vote";
    // }
    // else{
    //     cout << "No you can't vote";
    // }

    //if else if block
    // int age;
    // cin >> age;
    // cout << "You entered age as " << age << endl;
    // if(age==18){
    //     cout << "You can vote";
    // }
    // else if(age>100){
    //     cout << "Fraud";
    // }
    // else{
    //     cout << "No you can't vote";
    // }

    //nested if else
    // int age;
    // cin >> age;
    // cout << "You entered age as: " << age << endl;
    // if(age>=18){
    //     cout<<"You can vote"<< endl;
    //     if(age==18){
    //         cout<<"Vote for first time";
    //     }
    // }
    // else{
    //     cout<<"You cannot vote";
    // }

    //switch statement
    // int day;
    // cin >> day;
    // switch (day)
    // {
    // case 1:
    //     cout << "Monday";
    //     break;

    // case 2:
    //     cout << "Tuesday";
    //     break;
    
    // case 3:
    //     cout << "Wednesday";
    //     break;

    // case 4:
    //     cout << "Thursday";
    //     break;

    // case 5:
    //     cout << "Friday";
    //     break;

    // case 6:
    //     cout << "Saturday";
    //     break;

    // case 7:
    //     cout << "Sunday";
    //     break;
    // default:
    //     cout << "Invalid input"
    //     break;
    // }


    //Arrays
    //Arrays are used for the same data type storage

    // int arr[5] = {55,66,77,88,99};
    // cout << arr[2];

    //taking user input in array
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[3];


    //taking user input in array and modifying the value 
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[3] << endl;
    // arr[3] += 10;
    // cout << arr[3];


    //2D array
    // int arr[3][5]; //array of 3*5 dimensṇion 
    // arr[1][3] = 77;
    // cout << arr[1][3];

    //string as arrays
    // string s = "Aditya";
    // cout << s[6];

    //finding the size of the string
    // string s = "Aditya";
    // int len = s.size();
    // cout << s[len-6];

    //manipulating the string 
    // string s = "Hey";
    // s[1] = 'o';
    // cout << s;
    // cout << s[1] ;


    //for loops
    //printing Aditya for 20 times
    // for (int i = 0; i < 20; i++)
    // {
    //     cout << "Aditya" << '\n';
    // }

    //while loops
    // int i = 0;
    // while (i<=4)
    // {
    //     cout << "Aditya " << i << endl;
    //     i = i+1;
    // }
    

    //do while loops
    //general use case
    // int i = 0;
    // do
    // {
    //     cout << "Aditya " << i << endl;
    //     i = i+1;
    // } while (i<=7);
    
    //atleast running for once
    // int i = 2;
    // do
    // {
    //     cout << "Aditya " << i << endl;
    //     i = i+1;
    // } while (i<=1);
    
    //Functions

    //



//     return 0;
// }

//non parametereised void functions
// void printName(){
//     cout << "Hey";
// }

// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     cout.flush();
//     printName();

//     return 0;
// }


//parameterised void function
// void printName(string name){
//     cout << "Hey " << name << endl;
// }

// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     cout.flush();

//     string name;
//     cin >> name;
//     printName(name);

//     string name1;
//     cin >> name1;
//     printName(name1);

//     return 0;
// }


//printing sum of two numbers
// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     cout.flush();
//     int num1, num2;
//     cin >> num1 >> num2;
//     int num3 = num1+num2;
//     cout << num3;
//     return 0;
// }

//printing sum of two numbers using the function
//return function
// int sum(int num1, int num2){
//     int num3 = num1 +  num2;
//     return num3;
// }

// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     cout.flush();

//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(66, 70);
//     cout << res;
// }


//printing sum of two numbers using the function
//void function
// void sum(int num1, int num2){
//     int num3 = num1 +  num2;
//     cout << num3;
// }

// int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cout.flush();

//     int num1, num2;
//     cin >> num1 >> num2;
//     sum(num1, num2);
//     return 0;
// }

//exploring the inbuilt functions
// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     cout.flush();
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1,num2);
//     cout << minimum;
//     return 0;
// }

//writing the max function which works as same as the inbuilt max function
// int maxx(int num1, int num2){
//     if(num1 >= num2) return num1;
//     else return num2;
// }

// int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cout.flush();
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = maxx(num1,num2);
//     cout << minimum;
//     return 0;
// }

// //pass by value
// void doSomething(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 4;
//     cout << num << endl;
//     num += 10;
//     cout << num << endl;
// }

// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     cout.flush();

//     int num = 10;
//     doSomething(num);
//     cout << num << endl; //the original variable is printed
//     return 0;
// }


//pass by reference
// void doSomething(int &num) {  // Pass by reference using &
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 4;
//     cout << num << endl;
//     num += 10;
//     cout << num << endl;
// }

// int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

//     int num = 10;
//     doSomething(num);
//     cout << num << endl;  // Now this will print 29
// }

//Taking and printing the output of array using loop
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int arr[5];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
    
}
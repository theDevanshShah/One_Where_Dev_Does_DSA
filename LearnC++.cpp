#include <iostream>
#include <string>
using namespace std;

int main()
{
    // This file is just for introduction to C++

    // Input Output
    cout << "Hello World " << "\n";
    cout << "Hello World ";

    // Same new line thing but this time it's with endl keyword

    // Output
    cout << "Hello World " << endl;
    cout << "Hello World " << "Hey Dev!";

    // Input
    int x, y;
    cout << "Please enter value of x";
    cin >> x;
    
    cout << "Please enter value of y";
    cin >> y;

    cout << "value of x is " << x << "\n";
    cout << "value of y is " << y << "\n";

    // Data types in C++

    int a = 10;
    long b = 15;
    long long c = 16000000;
    float d = 5.5;
    double e = 4.5;
    cout << " Value of e = " << e;

    // Just for one word
    string name;
    cout << "Please Enter your name";
    cin >> name;
    cout<< "\n" << "Name is " << name;

    // For more then one words
    string str;
    getline(cin, str);
    cout << "\n" << "Full name is : " << str;
    return 0;
}
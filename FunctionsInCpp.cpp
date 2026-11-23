#include <iostream>
#include <string>

// Function declarations (prototypes) tell the compiler each function's name,
// return type, and parameters before main() calls them.
void greet();
void greetByName(const std::string &name);
int add(int first, int second);
void addFiveByValue(int number);
void addFiveByReference(int &number);

int main()
{
    // A function is a reusable, named block of code.
    greet();

    // Values passed to a function are called arguments.
    greetByName("Devansh");

    // The returned result can be stored, printed, or used in another expression.
    const int sum = add(7, 5);
    std::cout << "7 + 5 = " << sum << "\n\n";

    int number = 10;

    // Pass-by-value gives the function a copy, so the original stays unchanged.
    addFiveByValue(number);
    std::cout << "After pass-by-value, original number: " << number << '\n';

    // Pass-by-reference lets the function change the original variable.
    addFiveByReference(number);
    std::cout << "After pass-by-reference, original number: " << number << '\n';

    return 0;
}

// A function with no parameters and no returned result.
void greet()
{
    std::cout << "Hello!\n";
}

// name is a parameter. const reference avoids copying the string and prevents
// this function from modifying the caller's string.
void greetByName(const std::string &name)
{
    std::cout << "Hello, " << name << "!\n";
}

// int is the return type; first and second are parameters.
int add(int first, int second)
{
    return first + second;
}

void addFiveByValue(int number)
{
    number += 5;
    std::cout << "Copy inside addFiveByValue: " << number << '\n';
}

void addFiveByReference(int &number)
{
    number += 5;
    std::cout << "Value changed inside addFiveByReference: " << number << '\n';
}

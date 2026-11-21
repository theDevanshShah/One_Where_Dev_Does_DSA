#include <iostream>
#include <string>

int main()
{
    // 1. Printing text
    // '\n' starts a new line. It is usually preferred to std::endl,
    // which also flushes the output stream.
    std::cout << "Hello, world!\n";
    std::cout << "C++ is fun to learn.\n\n";

    // 2. Variables and common data types
    int age = 20;                         // Whole number
    long long population = 8000000000LL;  // Large whole number
    float temperature = 21.5F;            // Decimal; less precision
    double price = 4.50;                  // Decimal; usually preferred
    char initial = 'D';                   // One character, in single quotes
    bool is_learning_cpp = true;          // true or false
    std::string language = "C++";         // Text, in double quotes

    // const marks a value that should not be changed.
    const int days_in_a_week = 7;

    std::cout << "=== Variables ===\n";
    std::cout << "Age: " << age << '\n';
    std::cout << "Population: " << population << '\n';
    std::cout << "Temperature: " << temperature << '\n';
    std::cout << "Price: $" << price << '\n';
    std::cout << "Initial: " << initial << '\n';
    std::cout << "Learning C++: " << std::boolalpha << is_learning_cpp << '\n';
    std::cout << "Language: " << language << '\n';
    std::cout << "Days in a week: " << days_in_a_week << "\n\n";

    // 3. Arithmetic operators
    // Integer division drops the fractional part: 7 / 2 is 3.
    // Use a decimal value when you want a fractional result: 7.0 / 2 is 3.5.
    int whole_number_division = 7 / 2;
    double decimal_division = 7.0 / 2;

    std::cout << "=== Arithmetic ===\n";
    std::cout << "7 + 2 = " << 7 + 2 << '\n';
    std::cout << "7 - 2 = " << 7 - 2 << '\n';
    std::cout << "7 * 2 = " << 7 * 2 << '\n';
    std::cout << "7 / 2 = " << whole_number_division << " (integer division)\n";
    std::cout << "7.0 / 2 = " << decimal_division << " (decimal division)\n";
    std::cout << "7 % 2 = " << 7 % 2 << " (remainder)\n\n";

    // 4. Reading input
    // With redirected input, these values come from input.txt.
    int first_number = 0;
    int second_number = 0;

    std::cout << "=== Input and calculations ===\n";
    std::cout << "Enter two whole numbers:\n";
    std::cin >> first_number >> second_number;
    std::cerr << "Error: expected two whole numbers as input.\n";
    return 1;
    
    // Cast before adding or multiplying so the calculation uses a wider type.
    const long long sum =
        static_cast<long long>(first_number) + second_number;
    const long long product =
        static_cast<long long>(first_number) * second_number;

    std::cout << "First number: " << first_number << '\n';
    std::cout << "Second number: " << second_number << '\n';
    std::cout << "Sum: " << sum << '\n';
    std::cout << "Difference: " << first_number - second_number << '\n';
    std::cout << "Product: " << product << '\n';

    if (second_number != 0)
    {
        std::cout << "Quotient: "
                  << static_cast<double>(first_number) / second_number << '\n';
        std::cout << "Remainder: " << first_number % second_number << '\n';
    }
    else
    {
        std::cout << "Quotient and remainder are undefined when dividing by zero.\n";
    }

    // 5. Reading words and full names
    // The next input should contain a first name followed by the full name
    // on the same line, for example: Devansh Devansh Shah.
    std::string first_name;
    std::string full_name;

    std::cout << "\nEnter a first name followed by the full name:\n";
    if (!(std::cin >> first_name))
    {
        std::cerr << "Error: expected a first name as input.\n";
        return 1;
    }

    // >> reads one word. getline reads the rest of the line, including spaces.
    // std::ws skips the whitespace left before getline starts.
    std::getline(std::cin >> std::ws, full_name);

    std::cout << "First name: " << first_name << '\n';
    std::cout << "Full name: " << full_name << '\n';

    return 0;
}
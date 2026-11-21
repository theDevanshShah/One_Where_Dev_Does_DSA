#include <iostream>
using namespace std;

int main()
{
    // A conditional lets the program choose what to do.

    // 1. if / else if / else
    // Change age and run the program again to try different values.
    int age = 18;
    cout << "Age check: ";

    if (age < 18)
    {
        cout << "Not an adult\n";
    }
    else if (age == 18)
    {
        cout << "Just turned 18\n";
    }
    else
    {
        cout << "Adult\n";
    }

    // 2. else-if ladder: check grade ranges from top to bottom.
    int marks = 82;
    cout << "Grade: ";

    if (marks < 0 || marks > 100) // || means OR
    {
        cout << "Invalid marks\n";
    }
    else if (marks < 25)
    {
        cout << "F\n";
    }
    else if (marks <= 44)
    {
        cout << "E\n";
    }
    else if (marks <= 49)
    {
        cout << "D\n";
    }
    else if (marks <= 59)
    {
        cout << "C\n";
    }
    else if (marks <= 79)
    {
        cout << "B\n";
    }
    else
    {
        cout << "A\n";
    }

    // 3. switch: useful when one value has several exact choices.
    int dayNumber = 3;
    cout << "Day: ";

    switch (dayNumber)
    {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
        cout << "Invalid day number\n";
    }

    // 4. Modulo (%) gives the remainder. Even numbers have remainder 0
    // when divided by 2.
    int number = 7;
    cout << "Even or odd: ";

    if (number % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }

    // Practice: change the values above and try the boundary cases:
    // age: 17, 18, 19
    // marks: -1, 24, 25, 79, 80, 100, 101
    // dayNumber: 1 through 7, then 0

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // A loop repeats a block of code. Choose the loop based on when you
    // want to check its condition and whether you know the repeat count.

    // 1. for loop: useful when the number of repetitions is known.
    // Structure: initialization; condition; update
    std::cout << "=== for loop ===\n";
    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << ' ';
    }
    std::cout << "\n\n";
    // The condition is checked before each iteration. Here, i is 1 through 5.
    // Using i < 5 instead would print 1 through 4.

    // 2. while loop: checks the condition before each iteration.
    // Useful when repetition depends on a condition rather than a fixed count.
    std::cout << "=== while loop ===\n";
    int count = 1;
    while (count <= 3)
    {
        std::cout << "Count is " << count << '\n';
        count++; // Update the condition, or this loop may never end.
    }
    std::cout << '\n';

    // 3. do-while loop: runs its body at least once, then checks the condition.
    // Notice the semicolon after the while condition.
    std::cout << "=== do-while loop ===\n";
    int number = 1;
    do
    {
        std::cout << "Number is " << number << '\n';
        number++;
    } while (number <= 3);
    std::cout << '\n';

    // 4. range-based for loop: visits every element in a collection.
    const vector<int> scores = {85, 92, 78};
    std::cout << "=== range-based for loop ===\n";
    for (int score : scores)
    {
        std::cout << score << ' ';
    }
    std::cout << "\n\n";

    // 5. continue skips the rest of the current iteration.
    // break exits the loop completely.
    std::cout << "=== continue and break ===\n";
    for (int i = 1; i <= 6; i++)
    {
        if (i == 3)
        {
            continue; // Skip printing 3.
        }
        if (i == 5)
        {
            break; // Stop before printing 5.
        }
        std::cout << i << ' ';
    }
    std::cout << "\n\n";

    // 6. Nested loops: the inner loop completes for every outer-loop turn.
    std::cout << "=== nested loops ===\n";
    for (int row = 1; row <= 3; row++)
    {
        for (int column = 1; column <= 4; column++)
        {
            std::cout << "* ";
        }
        std::cout << '\n';
    }

    return 0;
}

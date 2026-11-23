#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string is the standard C++ type for working with text.
    // Include <string> to use it.
    string name = "Devansh";
    string sentence = "C++ strings can contain spaces.";

    cout << "name -> " << name << '\n';
    cout << "Sentence -> " << sentence << '\n';

    // 1. Indexing starts at 0: name[0] is 'D', name[1] is 'e'.
    // operator[] does not check whether the index is in range.
    cout << "First character: " << name[0] << '\n';
    cout << "Second character: " << name.at(1) << '\n';

    // at() checks the index and throws an exception if it is out of range.

    // 2. size() and length() both return the number of bytes stored.
    // For plain English text, this usually matches the visible character count.
    // UTF-8 characters outside basic ASCII can take multiple bytes.
    cout << "Length : " << name.length() << '\n';
    cout << "Size : " << name.size() << '\n';
    cout << "Is empty? " << std::boolalpha << name.empty() << "\n\n";

    // 3. Strings can be changed and joined together.

    string somethingCute = "How are you ?";
    string greeting = "Hello, " + somethingCute;
    greeting += "!";
    cout << "After changing and joining: " << greeting << '\n';

    // 4. Compare strings with ==, !=, and <.
    // Comparisons are case-sensitive: "C++" and "c++" are different.
    if (name == "devansh")
    {
        cout << "The name matches devansh.\n";
    }
    
    return 0;
}

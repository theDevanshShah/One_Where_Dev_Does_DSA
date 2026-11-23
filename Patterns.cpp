#include <iostream>
using namespace std;

void pattern_1()
{
    // Code for pattern 1

    cout << "Pattern 1";

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << " * ";
        }
        cout << '\n';
    }
}

void pattern_2()
{
    cout << "Pattern 2" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_3()
{
    cout << "Pattern 3" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern_4()
{
    cout << "Pattern 4" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern_5()
{
    cout << "Pattern 5" << endl;

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_6()
{
    cout << "Pattern 6" << endl;

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_7(int n)
{
    cout << "Pattern 7" << endl;

    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern_8(int n)
{
    cout << "Pattern 8" << endl;

    for (int i = n ; i > 0; i--)
    {
        // Space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // Star
        for (int j = 0; j < 2*i - 1; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

int main()
{
    // pattern_1();
    // pattern_2();
    // pattern_3();
    // pattern_4();
    // pattern_5();
    // pattern_6();
    // pattern_7(5);
    pattern_8(5);

    return 0;
}

// Tips
// There will be always NESTED LOOPS in pattern problems
// for the outer loop count the number of lines
// for the inner loop count the number of columns & connect them somehow to the rows
// whatever you're printing do it in inner room
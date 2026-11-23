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

    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_3()
{
    cout << "Pattern 3" << endl;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            cout << j+1 ;
        }
        cout << endl;
    }
}

int main()
{
    // pattern_1();
    // pattern_2();
    pattern_3();
    return 0;
}

// Tips
// There will be always NESTED LOOPS in pattern problems
// for the outer loop count the number of lines
// for the inner loop count the number of columns & connect them somehow to the rows
// whatever you're printing do it in inner room
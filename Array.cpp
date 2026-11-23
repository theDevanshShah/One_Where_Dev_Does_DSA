#include <iostream>
using namespace std;

int main()
{

    float arr[6];

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];

    cout << arr[0] << "\n"
         << arr[1] << "\n"
         << arr[2] << "\n"
         << arr[3] << "\n"
         << arr[4] << "\n"
         << arr[5] << "\n";

    int a[2][2];

    a[0][0] = 31;
    a[0][1] = 42;
    a[1][0] = 63;
    a[1][1] = 84;

    cout << "2D Array in Cpp" << a[0][0] << '\n';

    int TwoDArray[2][2] = {
        {899, 42},
        {33, 45}};

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << TwoDArray[row][col] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
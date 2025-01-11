#include <iostream>
using namespace std;

int main()
{
    // Define the 5x5 2D array with the given data
    int array[5][5] = {
        {31, 32, 33, 14, 15},
        {44, 45, 64, 12, 13},
        {76, 88, 94, 10, 11},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    // Print the array (optional, for verification)
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate the sum of the diagonal
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += array[i][i];
    }

    cout << "The sum of the diagonal elements is: " << sum << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function to calculate factorial using a for loop
unsigned long long fact(int n)
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << fact(number) << endl;
    return 0;
}
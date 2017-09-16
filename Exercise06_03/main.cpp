#include <iostream>

using namespace std;

int main()
{
    // local variables
    int numsToCalculate = 0;
    int num1 = 0, num2 = 1;

    // Header
    cout << "This program calculates Fibonacci-Numbers" << endl << endl;

    // Input of Fibonacci Numbers to be calculated
    cout << "How many numbers shall be calculated? ";
    cin >> numsToCalculate;

    // Calculation of Fibonacci Numbers
    cout << num1 << " " << num2 << " ";
    for (int counter = 0; counter < numsToCalculate; counter++)
    {
        cout << num1 + num2 << " ";

        int tempNum2 = num2;
        num2 = num1 + num2;
        num1 = tempNum2;
    }

    return 0;
}

#include <iostream>

/* Write a program that demonstrates that the size of an unsigned integer and a
   normal integer are the same, and that both are smaller in size than a long
   integer. */

using namespace std;

int main()
{
    int v_one;
    unsigned int v_two;
    long long v_three;

    cout << "Size of a normal integer: " << sizeof(v_one) << " Byte" << endl;
    cout << "Size of an unsigned integer: " << sizeof(v_two) << " Byte" << endl;
    cout << "Size of a long integer: " << sizeof(v_three) << " Byte" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int number, rem, sum = 0, i;
 
    cout << "Enter a Number : ";
    cin >> number;
    for (i = 1; i <= (number - 1); i++)
    {
        rem = number % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        cout << "Entered Number is perfect number";
    else
        cout << "Entered Number is not a perfect number";
    return 0;
}
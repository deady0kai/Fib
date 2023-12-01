#include <iostream>
using std::cout;
using std::cin;

int fibonacci(int number)
{
    if(number <= 1)
    {
        return number;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Number fib for number " << n << " " << fibonacci(n) << "\n";
    return 0;
}
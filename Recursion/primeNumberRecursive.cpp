#include <iostream>
using namespace std;

int prime_check(int num, int i)
{
    if (num <= 1)
    {
        return 0;
    }
    if (i * i > num)
    {
        return 1;
    }
    if (num % i == 0)
    {
        return 0;
    }
    return prime_check(num, i + 1);
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int count = prime_check(num, 2);

    if (count == 0)
    {
        cout << "The number is not a prime." << endl;
    }
    else
    {
        cout << "The number is a prime." << endl;
    }
    return 0;
}

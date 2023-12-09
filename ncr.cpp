#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
}

int ncr(int a, int b)
{
    int num = factorial(a);
    int denom = factorial(b) * factorial(a - b);
    int answer = num / denom;

    cout << answer << endl;
}

int main()
{
    int a, b;
    cout << "enter a top and a base value" << endl;
    cin >> a >> b;

    cout << "the answer is " << endl;
    ncr(a, b);
}
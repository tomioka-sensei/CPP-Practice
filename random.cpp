#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (n >= i)
    {
        int j = 1;
        while (n >= j)
        {
            cout << i;

            j++;
        }

        i++;

        cout << endl;
    }
}
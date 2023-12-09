#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (n > i)
    {
        int j = 0;
        while (n > j)
        {
            cout << j;

            j++;
        }
        i++;
        cout << endl;
    }
}
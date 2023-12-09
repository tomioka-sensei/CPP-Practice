#include <iostream>
using namespace std;

int main()
{
    int i;
    char op;

    cout << "enter the value" << endl;
    cin >> i;

    switch (1)
    {
    case 1:
        int hunderd = i / 100;
        i = i % 100;
        cout << "the no of hundred is " << hunderd << endl;

        int fifty = i / 50;
        i = i % 50;
        cout << "the number of fifty is " << fifty << endl;

        int twenty = i / 20;
        i = i % 20;
        cout << "the number of twenty is" << twenty << endl;

        int one = i / 1;
        i = i % 1;
        cout << "the no of one rs  note is" << one << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int32_t val,del=1;
    uint8_t i = 1;

    setlocale(LC_ALL, "Russian");
 
    cout << "Введите число" << endl;
    cin >> val;

    while (del<abs((int)val))
    {
        i++;
        del = del * 10;
    }
    if (del > 10)
    {
        i--;
        del = del / 10;
    }

    cout << val << '=';
    while (del > 0)
    {
        i--;
        if (val / del != 0)
        {
            cout << val / del << "*10^" << (int)i << '+';
        }
        val = val % del;
        del = del / 10;
    }
    cout << '\b';

}
#include <iostream>
using namespace std;

int main()
{
    uint32_t val,del=1;
    uint8_t i = 0;

    setlocale(LC_ALL, "Russian");
    cout << "Введите число" << endl;
    cin >> val;
    
    while (del<val)
    {
        i++;
        del = del * 10;
        //cout << val << ' ' << del << endl;
    }
    del = del / 10;
    //cout << del;
    cout << val << '=';
    while (del > 0)
    {
        cout << val / del;
        val = val % del;
        del = del / 10;
        i--;
        cout << "*10^" << (int)i;
        if (del > 0)
        {
            cout << '+';
        }
        //cout << val << ' ' << del << endl;
    }

}

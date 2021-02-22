// MAI_C_1_razrad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    uint32_t val,del=1;
    cin >> val;
    //cout << val;
    uint8_t i=0;
    while (del<val)
    {
        i++;
        del = del * 10;
        //cout << val << ' ' << del << endl;
    }
    del = del / 10;
    //cout << del;
    while (del > 0)
    {
        cout << val / del << endl;
        val = val % del;
        del = del / 10;
        //cout << val << ' ' << del << endl;
    }

}

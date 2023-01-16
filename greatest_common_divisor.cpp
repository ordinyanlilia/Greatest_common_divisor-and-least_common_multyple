#include <iostream>
using namespace std;

int getdiv(int a, int b)
{
    if (b != 0)
        return getdiv(b, a % b);
    else
        return a;
}


int main()
{
    while (true)
    {
        int a, b;
        cout << endl << "Input num1 and num2" << endl;
        cin >> a;
        cin >> b;
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        cout << "Greatest common divisor of num1 and num2 is " << getdiv(a, b) << endl;
        cout << "Least common multyple of num1 and num2 is " << a * b / getdiv(a, b) << endl;
    }
}


#include <iostream>
#include "ComplexNumber.hpp"
#include "ComplexNumber.cpp"

using namespace std;

int main()
{
    ComplexNumber a(1,4);  // stampo diversi valori per controllare i vari casi
    ComplexNumber b(1,-3);
    ComplexNumber c = a + b;
    ComplexNumber d(0,0);
    ComplexNumber g(0,-1);
    ComplexNumber h(1,0);
    ComplexNumber eps(4e-16,4e-16);
    cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << "d = " << d << endl << "g = " << g << endl << "h = " << h << endl;
    ComplexNumber k = conjugate(a);
    cout << "a* = " << k << endl;
    bool s = (a == b);
    if (s == false)  // confronto due numeri diversi tra loro
    {
        cout << "a è diverso da b." << endl;
    }
    else {
        cout << "a è uguale a b." << endl;
    }

    bool t = (a == a+eps);  // confronto due numeri diversi di una quantità minore di un'epsilon di macchina
    if (t == false)
    {
        cout << "a è diverso da a + eps." << endl;
    }
    else {
        cout << "a è uguale ad a + eps." << endl;
    }


    return 0;
}

#include <cmath>
#include <iostream>

using namespace std;


double g(const double a, const double b);

int main()
{
    double s, t;

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;


    double k = (g(1, s) + (1 + pow(g(t, 1), 2) * (1 + pow(g(t, 1), 2)))) / (1 + pow (g (s + t,1),3));

    cout << "k = " << k << endl;
    return 0;
}


double g(const double a, const double b)
{
    return a * a + a*b+b * b;
}
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision
using namespace std;
int main ()
{
    double f =3.14159;
    cout << setprecision(5) << f << '\n';///3.1416
    cout << setprecision(9) << f << '\n';///3.14159
    cout << fixed;
    cout << setprecision(5) << f << '\n';///3.14159
    cout << setprecision(9) << f << '\n';///3.141590000
    cout << scientific;
    cout << setprecision(5) << f << '\n';///3.14159
    cout << setprecision(9) << f << '\n';///3.141590000

    return 0;
}

#include <iostream> 

using namespace std;

int main()
{
    double x;  // вхідний параметр 
    //double z1; // результат обчислення 1-го виразу 
    double z2; // результат обчислення 2-го виразу 

    cout << "x = "; cin >> x;

    //z1 = 2 * x;
    z2 = x + x; 

    cout << endl;
    //cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl; 

    cin.get();
    double a;
    double x1;
    double x2;
	cout << "a = "; cin >> a;
	x1 = cos(a) + cos(a * 2) + cos(a * 6) + cos(a * 7);
	x2 = 4 * cos(a/2) * cos((5.0/2.0)* a) * cos(4*a);
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	cin.get();
    return 0;
}
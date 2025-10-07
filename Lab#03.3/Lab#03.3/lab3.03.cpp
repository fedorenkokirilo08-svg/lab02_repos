// Lab_03_3.cpp
// Федоренко Кирило Євгенович
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 26
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double R;
	double y;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
if (x<=-5)
{
	y = -3;
}
else
if (-5 < x && x <= -5)
{
	y = (3 / 5) * x;
}
else 
if (0 < x && x <= 4)
{
	y = 4 - sqrt(16 - (x * x));
}
else 
if (4 < x && x <= 8)
{
	y = x - 4;
}
else {
	y = 4;

}
cout << endl;
cout << "y = " << y << endl;
cin.get();	
return 0;
}
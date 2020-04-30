#include <cmath> 
#include <stdio.h> 
#include <iostream> 
using namespace std;

double func(double x)
{
	if (x >= 0)
		return sin(x * x);
	if (x < 0)
		return sin(x * x) + cos(x * x);

}
double func2(double& x)
{

	return func(x);
}
int main() {
	int a, b, a1, b1;
	cout << "DIapozon -A -B F1" << endl;
	cin >> a >> b;
	cout << "Diapozon F2" << endl;
	cin >> a1 >> b1;
	cout << " Func 1" << endl;
	for (double i = a; i <= b;i++)
	{

		double g = func(i);
		cout << "{" << i << "}" << "Func=" << g << endl;
	}
	cout << "Func 2" << endl;
	for (double n = a1; n <= b1;n++)
	{
		double g2 = func2(n);
		cout << "{" << n << "}" << "Func2=" << g2 << endl;
	}
	cout << "Завершение цикла!)" << endl;
	return 0;
}

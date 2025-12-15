#include<iostream>
#include<string>
using namespace std;

int maxofthree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return  a; 
	else if (b >= a && b >= c)
		return  b;
	else
		return  c;
}

int minvalue(int a, int b, int c)
{
	if (a <= b && a <= c)
		return  a;
	else if (b <= a && b <= c)
		return  b;
	else
		return  c;
}

int main()
{
	int a, b, c;
	int minval = -1000000;

	cout << "Enter a integers: ";
	cin >> a;
	cout << " Enter b integers: ";
	cin >> b;
	cout << " Enter c integers: ";
	cin >> c;

	minval = minvalue(a, b, c);
	cout << "The minimum value is: " << minval << endl;

	int maxval = maxofthree(a, b, c);
	cout << "The maximum value is: " << maxval << endl;

	return 1;
}
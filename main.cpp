#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int hrn, kop;
	cout << "enter hrn";
	cin >> hrn;
	cout << "enter kop";
	cin >> kop;

	hrn += kop / 100;
	kop %= 100;
	cout << "amount = " << hrn << "." << kop << endl;
	return 0;
	system("pause");
}
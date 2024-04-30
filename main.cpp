#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter radius";
	int R;
	cin >> R;
	double V = (4 / 3) * 3.14 * (R * R * R);
	cout << "V = " << V << endl;
	return 0;
	system("pause");
}
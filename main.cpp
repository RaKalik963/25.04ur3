#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Map scale (number of kilometres in one centimetre)";
	int scale;
	cin >> scale;

	cout << "Distance between points representing points (cm)";
	int distance;
	cin >> distance;

	double dis_bet_point = scale / 100 * distance;
	cout << "Distance between points" << dis_bet_point << endl;
	return 0;
	system("pause");
}
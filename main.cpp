#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter year";
	int year;
	cin >> year;
	bool is_leap_year = (year % 4 == 0 && year % 100 != 0);
	int total_days = 365 + static_cast<int>(is_leap_year);
	cout << "in" << year << "year = " << total_days << "days" << endl;
	return 0;
	system("pause");
}
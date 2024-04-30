#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter days";
    int days;
    cin >> days;
    int weeks = round(days / 7);
    int day = days % 7;
    cout << " weeks = " << weeks << " day = " << day << endl;
	return 0;
	system("pause");
}
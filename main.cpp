#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sec;
	std::cout << "enter seconds ";
	std::cin >> sec;
	float res = static_cast<float>(sec / 60);
	cout << "minuts = " << res << endl;
	int hours = sec / 3600;
	cout << "hours = " << hours << endl;
	return 0;
	system("pause");
}
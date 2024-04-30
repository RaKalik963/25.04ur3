#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter distance in meters ";
    int distance;
    cin >> distance;

    cout << "Enter time (min.sec) ";
    int min, sec;
    cin >> min >> sec;

    int total_sec = min * 60 / sec;
    double speed = (distance / 1000.0) / (total_sec / 3600.0);

    cout << "minutes = " << min << " seconds = " << sec << " total = " << total_sec << endl;
    cout << "Speed = " << speed << endl;
	return 0;
	system("pause");
}
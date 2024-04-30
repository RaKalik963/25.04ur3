#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    cout << "enter a fractional number";
    double amount;
    cin >> amount;
    int hrn = static_cast<int>(amount);
    int kop = round((amount - hrn) * 100);
    cout << " grn " << hrn << " kop" << kop << endl;
    system("pause");
    return 0;
}
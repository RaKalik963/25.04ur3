#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    double amount;
    std::cout << "vvedit drobove chislo ";
    std::cin >> amount;
    int hrn = static_cast<int>(amount);
    int kop = round((amount - hrn) * 100);
    std::cout << " grn " << hrn << " kop" << kop << std::endl;
    system("pause");
    return 0;
}
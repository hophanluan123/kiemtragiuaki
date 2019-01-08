#include <iostream>
#include <cmath>
using namespace std;
 
int main() 
{
	int kyVong, tienGui, soNam = 0;
	float laiSuat;
	cin >> tienGui>>laiSuat >> kyVong;
	// Lãi don kyVong = tienGui*(1+laiSuat*soNam)
	cout << ceil((float(kyVong)/tienGui - 1.0)/laiSuat) << endl;
 
	// Lãi kép kyVong = tienGui*(1+laiSuat)^soNam
	cout << ceil(log(float(kyVong)/tienGui)/log(1.0 + laiSuat)) << endl;
 
	return 0;
}

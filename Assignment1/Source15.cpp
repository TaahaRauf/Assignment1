#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	float angle;
	cout << "Please enter the angle in radians ";
	cin >> angle; 

	float tangent = tan(angle);
	float sine = sin(angle);
	float cosine = cos(angle);
	cout << "The sine of " << angle << " is " << fixed << setprecision(4) << sine << endl;
	cout << "The cosine of " << angle << " is " << fixed << setprecision(4) << cosine << endl;
	cout << "The tan of " << angle << " is " << fixed << setprecision(4) << tangent << endl ;

	return 0;
}
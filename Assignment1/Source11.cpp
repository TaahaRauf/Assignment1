//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//using namespace std;
//int main() {
//	float voltage;
//	float resistance;
//	float inductance;
//	float capacitance;
//	float frequency;
//	cout << "Please enter voltage ";
//	cin >> voltage;
//	cout << "Please enter resistance ";
//	cin >> resistance;
//	cout << "Please enter inductance ";
//	cin >> inductance;
//	cout << "Please enter capacitance";
//	cin >> capacitance;
//	cout << "Please enter frequency";
//	cin >> frequency;
//	const float PI = 3.142;
//	float denominator = (resistance * resistance) + ((2 * PI * frequency * inductance) - ((1 / (2 * PI * frequency * capacitance))) * (2 * PI * frequency * inductance) - ((1 / (2 * PI * frequency * capacitance))));
//	float numerator = voltage;
//	float current = numerator / pow(denominator, 0.5);
//	cout << "The value for current is " << current;
//
//	return 0;
//}